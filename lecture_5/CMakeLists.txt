cmake_minimum_required(VERSION 3.5.1)
project(lecture_5)

add_compile_options(-std=c++20 -Wall -Wextra -Wpedantic -DNDEBUG)

add_executable(temp temp.cpp)
add_executable(get_sum get_sum.cpp)
add_executable(structured_binding structured_binding.cpp)
add_executable(no_discard no_discard.cpp)
add_executable(maybe_unused maybe_unused.cpp)
add_executable(lambda lambda.cpp)
add_executable(STL_lambda STL_lambda.cpp)
add_executable(fibs constexpr/bench.cpp)
add_executable(STL constexpr/STL.cpp)