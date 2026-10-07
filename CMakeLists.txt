cmake_minimum_required(VERSION 3.16)
project(codefinity_cpp_fundamentals LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(printing_basics lessons/01_getting_started/printing_basics.cpp)
add_executable(arithmetic_operators lessons/02_operators/arithmetic_operators.cpp)

foreach(target printing_basics arithmetic_operators)
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4)
    else()
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
