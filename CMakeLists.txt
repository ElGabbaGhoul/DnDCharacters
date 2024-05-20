cmake_minimum_required(VERSION 3.26)
project(DnDCharacters)

set(CMAKE_CXX_STANDARD 17)

add_executable(DnDCharacters main.cpp
        Player.cpp
        Player.hpp
        Person.cpp
        Person.hpp
        Functions.cpp
        Functions.hpp)
