cmake_minimum_required(VERSION 3.16)
project(codefinity_cpp_fundamentals LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(printing_basics lessons/01_getting_started/printing_basics.cpp)
add_executable(arithmetic_operators lessons/02_operators/arithmetic_operators.cpp)

enable_testing()
foreach(target printing_basics arithmetic_operators)
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4)
    else()
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
    add_test(
        NAME ${target}_output
        COMMAND ${CMAKE_COMMAND}
            "-DPROGRAM=$<TARGET_FILE:${target}>"
            "-DEXPECTED_FILE=${CMAKE_CURRENT_SOURCE_DIR}/tests/${target}.txt"
            -P "${CMAKE_CURRENT_SOURCE_DIR}/tests/check_output.cmake"
    )
endforeach()
