cmake_minimum_required(VERSION 3.23.1)

project(main)

set(CMAKE_CXX_STANDAR 14)
set(CMAKE_CXX_STANDAR_REQUIRED True)
set(CMAKE_CXX_FLAGS "-O3")

add_executable(main main.cpp)