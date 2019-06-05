import typing
from pathlib import Path
from mako.template import Template
import sys
import clang.cindex

index = clang.cindex.Index.create()

class Enum:
    def __init__(self,name):
        self.name = name;
        self.values = []

class ClassHolder:
    def __init__(self,name):
        self.name = name
        self.fields = []

global_registry = []
registry = []

def filter_node_list_by_classes(
    nodes: typing.Iterable[clang.cindex.Cursor]
) -> typing.Iterable[clang.cindex.Cursor]:
    global global_registry

    for i in nodes:
        if i.kind in [clang.cindex.CursorKind.CLASS_DECL,clang.cindex.CursorKind.STRUCT_DECL]:
            if i.is_definition():
                structHolder = ClassHolder(i.displayname)
                for child in i.get_children():
                    if child.kind == clang.cindex.CursorKind.FIELD_DECL:
                        if child.access_specifier == clang.cindex.AccessSpecifier.PUBLIC:
                            structHolder.fields.append(child.displayname)
                    elif child.kind == clang.cindex.CursorKind.CXX_METHOD:
                        if child.access_specifier == clang.cindex.AccessSpecifier.PUBLIC:
                            structHolder.fields.append(child.spelling)

                registry.append((Template(filename="templates/class_template.txt").render(struct=structHolder)))
                global_registry.append("register_type_{}".format(i.displayname))
        elif i.kind == clang.cindex.CursorKind.ENUM_DECL:
            enum_value = Enum(i.displayname)
            for child in i.get_children():
                enum_value.values.append(child.displayname)

            registry.append(Template(filename="templates/enum_template.txt").render(enum=enum_value))
            global_registry.append("register_enum_{}".format(i.displayname))

for filename in Path(sys.argv[1]).glob('**/*.h'):
    translation_unit = index.parse(filename.as_posix(), args=['-std=c++17'])
    filter_node_list_by_classes(translation_unit.cursor.get_children())

with open(sys.argv[2], 'w') as f:
    f.write("#include <Box2D/Box2D.h>\n")
    f.write("#include <sol/sol.hpp>\n\n")
    f.write("".join(registry))
    f.write((Template(filename="templates/global_register_template.txt").render(library_name="Box2D", entries=global_registry)))
