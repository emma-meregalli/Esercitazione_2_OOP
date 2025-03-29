cmake_minimum_required(VERSION 3.20)
project(ComplexNumbers LANGUAGES CXX C VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wshadow")

add_executable(ComplexNumbers main.cpp)







