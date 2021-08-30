cmake_minimum_required(VERSION 3.5.1)
project(lecture_4)

add_compile_options(-std=c++20 -Wextra)

add_executable(if_init if_init.cpp)
add_executable(likely likely.cpp)
add_executable(for_init for_init.cpp)
add_executable(switch_init switch_init.cpp)
add_executable(switch_fall switch_fall.cpp)
add_executable(temp temp.cpp)
