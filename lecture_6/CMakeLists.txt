cmake_minimum_required(VERSION 3.5.1)
project(lecture_6)

add_compile_options(-std=c++20 -Wall -Wextra -Wpedantic)

add_executable(stack_hack stack_hack.cpp)
add_executable(return_pointer return_pointer.cpp)
add_executable(pointer_math pointer_math.cpp)
add_executable(temp temp.cpp)