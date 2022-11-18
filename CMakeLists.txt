cmake_minimum_required(VERSION 3.21)
project(cpp_04)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_04_00
        ex00/srcs/main.cpp
        ex00/srcs/Animal.cpp
        ex00/srcs/Cat.cpp
        ex00/srcs/Dog.cpp
        ex00/srcs/WrongAnimal.cpp
        ex00/srcs/WrongCat.cpp

        ex00/includes/Animal.hpp
        ex00/includes/Cat.hpp
        ex00/includes/Dog.hpp
        ex00/includes/WrongAnimal.hpp
        ex00/includes/WrongCat.hpp
        )
target_include_directories(cpp_04_00 PRIVATE ex00/includes/)
