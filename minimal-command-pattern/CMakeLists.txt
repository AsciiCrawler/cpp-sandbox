cmake_minimum_required(VERSION 3.23.1)
project(main)

set(CMAKE_CXX_STANDAR 14)
set(CMAKE_CXX_STANDAR_REQUIRED True)
set(CMAKE_CXX_FLAGS "-std=c++14 -ldl") # -O3
set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")

find_package(SDL2 REQUIRED)
file(GLOB sourceFiles
     "src/*.c"
     "src/*.cpp"
)

add_executable(main main.cpp ${sourceFiles})
target_link_libraries(main ${SDL2_LIBRARIES})