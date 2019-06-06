# LuaSol3Generator
A simple python + libclang script to simplify wrapping c++ code with sol2  

## What is this?

This is a PoC tribute to a great library https://github.com/ThePhD/sol2 which helps to connect lua and c++.
Yet most of the time you don't want to wrap all the classes/methods/functions - you might like the idea of automatic boilerplate code generation.

## Dependencies
Python 3.6
libclang
sol3

## Usage

usage: main.py [-h] file folder includes library_name

positional arguments:
  file          Filename of meta header file of the library
  folder        A folder where you want your binding to be created in
  includes      Path to the includes folder of the targeted library
  library_name  Name of the targeted library, will be used to prefix filenames
                and usertype names

optional arguments:
  -h, --help    show this help message and exi

## Usage example

simply run :
`python3 main.py /tmp/Box2D/includes/Box2d.h /tmp/output/ /tmp/Box2D/includes/ Box2D`

## Example of Box2 binding generation
Can be found at example folder :-)

### What is working ?
As stated before - this is yet - a PoC - so right now it does:
- Bind enums
- Bind public methods and variables
