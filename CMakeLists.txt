cmake_minimum_required(VERSION 3.17)
project(Iterator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Iterator main.cpp Vector.cpp Vector.h Persona.cpp Persona.h InterfazIterator.h InterfazColeccion.h VectorIterador.cpp VectorIterador.h Nodo.cpp Nodo.h Lista.cpp Lista.h ListIterator.cpp ListIterator.h)