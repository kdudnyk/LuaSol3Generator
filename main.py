import typing
from mako.template import Template
import sys
import clang.cindex
import ntpath

clang.cindex.Config.set_library_file('/usr/lib/x86_64-linux-gnu/libclang-9.so.1')
index = clang.cindex.Index.create()

global_registry = []
registry = []

class Method:
    def __init__(self,name):
        self.name = name
        self.overloaded = False
        self.signatures = []


def filter_node_list_by_classes(
    nodes: typing.Iterable[clang.cindex.Cursor]
) -> typing.Iterable[clang.cindex.Cursor]:
    global global_registry

    for i in nodes:
        if i.kind in [clang.cindex.CursorKind.CLASS_DECL,clang.cindex.CursorKind.STRUCT_DECL]:
            if i.is_definition():
                usertype_name = i.displayname
                usertype_fields = []
                usertype_methods = {}

                for child in i.get_children():
                    if child.kind == clang.cindex.CursorKind.FIELD_DECL:
                        # we are currently interested in only public fields which are non pointers
                        if child.access_specifier == clang.cindex.AccessSpecifier.PUBLIC and child.type.kind != clang.cindex.TypeKind.POINTER:
                            usertype_fields.append(child.displayname)

                    elif child.kind == clang.cindex.CursorKind.CXX_METHOD:
                        if child.access_specifier == clang.cindex.AccessSpecifier.PUBLIC:
                            # skip operators for now
                            if child.spelling.startswith("operator"):
                                continue
                            method = Method(child.spelling)
                            signature = child.type.get_result().spelling + child.displayname[child.displayname.find('('):child.displayname.find(')')+1]
                            if child.is_const_method():
                                signature += "const"
                            print("class {} return type is {}".format(child.spelling,signature))

                            overload_check = usertype_methods.get(method.name)
                            if usertype_methods.get(method.name):
                                overload_check.overloaded = True
                                overload_check.signatures.append(signature)
                            else:
                                method.signatures.append(signature)
                                usertype_methods[method.name] = method

                registry.append((Template(filename="templates/class_template.txt").render(name=usertype_name,fields=usertype_fields, methods=usertype_methods)))
                global_registry.append("register_type_{}".format(i.displayname))

        elif i.kind == clang.cindex.CursorKind.ENUM_DECL:
            enum_name = i.displayname
            enum_values = []
            for child in i.get_children():
                enum_values.append(child.displayname)

            registry.append(Template(filename="templates/enum_template.txt").render(name=enum_name, values=enum_values))
            global_registry.append("register_enum_{}".format(i.displayname))

translation_unit = index.parse(sys.argv[1], args=['-std=c++17',sys.argv[3]])
# translation_unit = index.parse("/tmp/test.h", args=['-std=c++17',sys.argv[3]])
filter_node_list_by_classes(translation_unit.cursor.get_children())

with open(sys.argv[2]+".h", 'w') as f:

    # f.write("".join(registry))
    f.write((Template(filename="templates/global_header_template.txt").render(library_name="Box2D", entries=global_registry)))

with open(sys.argv[2]+".cpp", 'w') as f:
    f.write("#include <"+ntpath.basename(sys.argv[2]+".h")+">\n\n")
    f.write("".join(registry))
    f.write((Template(filename="templates/global_cpp_template.txt").render(library_name="Box2D", entries=global_registry)))
