cmake_minimum_required(VERSION 3.22)
# set the project name
project(Lab_4 VERSION 2.5)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -g -Wextra -Wpedantic)

include_directories( z3a z5_BST)

# add the executable
add_executable(apk_lab_5
                main.cpp
                z3a/stack.h
            #################    zad_5_program.cpp
            #################    zad_5_program.h
                z5_BST/Element.hpp
                z5_BST/Tree.hpp
)


