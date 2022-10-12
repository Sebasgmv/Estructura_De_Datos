cmake_minimum_required(VERSION 3.23)
project(KDTREE_IMPLEMENTATION)

set(CMAKE_CXX_STANDARD 14)


set(PROJECT_HEADERS
        Punto.h
        ArbolKD.h
        NodoKD.h
        )
set(PROJECT_SOURCES
        main.cpp
        Punto.cxx
        NodoKD.cxx
        ArbolKD.cxx
        )

add_executable(KDTREE_IMPLEMENTATION ${PROJECT_SOURCES} ${PROJECT_HEADERS})