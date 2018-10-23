cmake_minimum_required(VERSION 3.12)
project(guia_3_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(guia_3_1
        Arbol.cpp
        Arbol.h
        main.cpp
        Makefile
        Nodo.h
        Readme.txt)
