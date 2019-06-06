# LuaSol3Generator
A simple python + libclang script to simplify wrapping c++ code with sol2  

## What is this?

This is a PoC tribute to a great library https://github.com/ThePhD/sol2 which helps to connect lua and c++.
Yet most of the time you don't want to wrap all the classes/methods/functions - you might like the idea of automatic boilerplate code generation.

## Dependencies
Python 3.6
libclang
sol3

## How to use
simply run :
`python main.py ${LIBRARY_INCLUDES_FILE} ${OUTPUT_FILE_PREFIX} ${LIBRARY_INCLUDES_DIR}`

And example to bind box2d library is :

`python main.py /tmp/box2d/include/Box2D/Box2D.h /tmp/result -I/tmp/box2d/include/`

### What is working ?
As stated before - this is yet - a PoC - so right now it does:
- Bind enums
- Bind public methods and variables
