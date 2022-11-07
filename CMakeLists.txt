cmake_minimum_required(VERSION 3.23)
project(doctest_demo)

set(CMAKE_CXX_STANDARD 20)

add_executable(doctest_demo main.cpp a.cpp b.cpp)
target_include_directories(doctest_demo PRIVATE doctest/doctest)