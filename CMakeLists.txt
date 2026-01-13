cmake_minimum_required(VERSION 3.10)
project(leetcode_c LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(leetcode_c twoSum.cpp
        forloop.cpp
        fizzBuzz.cpp
        ds-learning.cpp
        ds-learning.h)

target_include_directories(leetcode_c PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})