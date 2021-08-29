cmake_minimum_required(VERSION 3.5.1)
project(lecture_3)

add_compile_options(-std=c++20)

find_package(fmt)

link_libraries(fmt::fmt)

add_executable(sizes sizes.cpp)
add_executable(hello hello_world.cpp)
add_executable(hello_fmt hello_world_fmt.cpp)