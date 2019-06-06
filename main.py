import typing
from mako.template import Template
import sys
import clang.cindex
import ntpath

clang.cindex.Config.set_library_file('/usr/lib/x86_64-linux-gnu/libclang-9.so.1')
index = clang.cindex.Index.create()

global_registry = []
registry = []
free_functions = {}

class Method:
    def __init__(self,name):
        self.name = name
        self.overloaded = False
        self.signatures = []


def filter_node_list_by_classes(
    nodes: typing.Iterable[clang.cindex.Cursor]
) -> typing.Iterable[clang.cindex.Cursor]:
    global global_registry
    global free_functions

    for i in nodes:
        if i.kind in [clang.cindex.CursorKind.CLASS_DECL,clang.cindex.CursorKind.STRUCT_DECL]:
            if i.is_abstract_record():
                continue
            if i.is_definition():
                usertype_name = i.displayname
                usertype_fields = []
                usertype_methods = {}
                usertype_constructors = []
                usertype_meta_functions = []

                for child in i.get_children():
                    if child.access_specifier != clang.cindex.AccessSpecifier.PUBLIC:
                        continue

                    if child.kind == clang.cindex.CursorKind.FIELD_DECL:
                        # we are currently interested in only public fields which are non pointers
                        if child.access_specifier == clang.cindex.AccessSpecifier.PUBLIC and child.type.kind != clang.cindex.TypeKind.POINTER:
                            usertype_fields.append(child.displayname)

                    elif child.kind == clang.cindex.CursorKind.CXX_METHOD:
                        # skip operators for now
                        if child.spelling.startswith("operator"):
                            arg1 = child.displayname[child.displayname.find('(')+1:child.displayname.find(')')]
                            arg1 = arg1.replace("const",'')
                            arg1 = arg1.replace("&",'')
                            arg1 = arg1.replace(" ",'')
                            arg1 += "&"
                            arg2 = i.displayname.replace(" ",'')
                            arg2 = arg2+"&"

                            args = []
                            if arg1 != arg2 :
                                args = [(arg1,arg2),(arg2,arg1)]
                            else:
                                args = [(arg1,arg2)]

                            if child.canonical.spelling == "operator*=":
                                usertype_meta_functions.append(("*=","multiplication",args))
                            elif child.canonical.spelling == "operator+=":
                                usertype_meta_functions.append(("+=","addition",args))
                            elif child.canonical.spelling == "operator-=":
                                usertype_meta_functions.append(("-=", "subtraction",args))
                            continue

                        method = Method(child.spelling)
                        signature = child.type.get_result().spelling + child.displayname[child.displayname.find('('):child.displayname.find(')')+1]
                        if child.is_const_method():
                            signature += "const"

                        overload_check = usertype_methods.get(method.name)
                        if usertype_methods.get(method.name):
                            overload_check.overloaded = True
                            overload_check.signatures.append(signature)
                        else:
                            method.signatures.append(signature)
                            usertype_methods[method.name] = method

                    elif child.kind == clang.cindex.CursorKind.CONSTRUCTOR:
                        signature = child.displayname[child.displayname.find('('):child.displayname.find(')') + 1]
                        usertype_constructors.append(signature)

                registry.append((Template(filename="templates/class_template.txt").render(name=usertype_name,
                                                                                          fields=usertype_fields,
                                                                                          methods=usertype_methods,
                                                                                          constructors=usertype_constructors,
                                                                                          metas=usertype_meta_functions)))
                global_registry.append("register_type_{}".format(i.displayname))

        elif i.kind == clang.cindex.CursorKind.ENUM_DECL:
            enum_name = i.displayname
            enum_values = []
            for child in i.get_children():
                enum_values.append(child.displayname)

            registry.append(Template(filename="templates/enum_template.txt").render(name=enum_name, values=enum_values))
            global_registry.append("register_enum_{}".format(i.displayname))

        elif i.kind == clang.cindex.CursorKind.FUNCTION_DECL:
            function = Method(i.spelling)
            signature = i.type.get_result().spelling + i.displayname[i.displayname.find('('):i.displayname.find(')')+1]

            # print("function is {}, signature {}".format(i.type.kind,signature))
            overload_check = free_functions.get(function.name)
            if free_functions.get(function.name):
                overload_check.overloaded = True
                overload_check.signatures.append(signature)
            else:
                function.signatures.append(signature)
                free_functions[function.name] = function
        else:
            if i.kind == clang.cindex.CursorKind.FUNCTION_TEMPLATE:
                # print("III {}".format(i.spelling))
                function = Method(i.spelling)
                overload_check = free_functions.get(function.name)
                if free_functions.get(function.name):
                    overload_check.overloaded = True
                else:
                    function.overloaded = True
                    free_functions[function.name] = function


translation_unit = index.parse(sys.argv[1], args=['-std=c++17',sys.argv[3]])
# translation_unit = index.parse("/tmp/test.h", args=['-std=c++17',sys.argv[3]])
filter_node_list_by_classes(translation_unit.cursor.get_children())

with open(sys.argv[2]+".h", 'w') as f:
    f.write((Template(filename="templates/global_header_template.txt").render(library_name="Box2D", entries=global_registry)))

with open(sys.argv[2]+".cpp", 'w') as f:
    f.write("#include <"+ntpath.basename(sys.argv[2]+".h")+">\n\n")
    f.write("".join(registry))
    f.write((Template(filename="templates/global_cpp_template.txt").render(library_name="Box2D", entries=global_registry)))
    f.write((Template(filename="templates/free_functions_template.txt").render(library_name="Box2D",functions=free_functions)))
