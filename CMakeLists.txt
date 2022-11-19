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

add_executable(cpp_04_01
        ex01/srcs/main.cpp
        ex01/srcs/Animal.cpp
        ex01/srcs/Cat.cpp
        ex01/srcs/Dog.cpp
        ex01/srcs/Brain.cpp

        ex01/includes/Animal.hpp
        ex01/includes/Cat.hpp
        ex01/includes/Dog.hpp
        ex01/includes/Brain.hpp
        )
target_include_directories(cpp_04_01 PRIVATE ex01/includes/)

add_executable(cpp_04_02
        ex02/srcs/main.cpp
        ex02/srcs/Animal.cpp
        ex02/srcs/Cat.cpp
        ex02/srcs/Dog.cpp
        ex02/srcs/Brain.cpp

        ex02/includes/Animal.hpp
        ex02/includes/Cat.hpp
        ex02/includes/Dog.hpp
        ex02/includes/Brain.hpp
        )
target_include_directories(cpp_04_02 PRIVATE ex02/includes/)
