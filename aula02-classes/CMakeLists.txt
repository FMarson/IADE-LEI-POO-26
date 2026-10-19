cmake_minimum_required(VERSION 4.3)
project(aula02_classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(aula02_classes main.cpp
        Data.cpp
        Data.h
        TipoConta.h
        Cliente.cpp
        Cliente.h
        ContaBancaria.cpp
        ContaBancaria.h
        Exemplo.cpp
        Exemplo.h)
