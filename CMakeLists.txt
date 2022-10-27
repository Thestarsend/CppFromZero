cmake_minimum_required(VERSION 3.23)
project(cppclass)

set(CMAKE_EXE_LINKER_FLAGS -static)
set(CMAKE_CXX_STANDARD 20)

add_executable(cppclass main.cpp)
add_executable(homework homework/2210/221026/4.cpp)
add_executable(test lab/221019/class.cpp)
add_executable(start start.cpp)
