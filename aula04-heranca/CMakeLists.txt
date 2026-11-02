cmake_minimum_required(VERSION 4.3)
project(aula04_heranca)

set(CMAKE_CXX_STANDARD 20)

add_executable(aula04_heranca main.cpp
        Animal.cpp
        Animal.h
        Cachorro.cpp
        Cachorro.h
        Gato.cpp
        Gato.h
        Passaro.cpp
        Passaro.h)
