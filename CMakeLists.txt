cmake_minimum_required(VERSION 3.20)

project(CppLearning)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(
    EmbeddedCppFramework
    src/utility.cpp
)

target_include_directories(
    EmbeddedCppFramework
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(
    basic_example
    examples/basic_example.cpp
)

target_link_libraries(
    basic_example
    PRIVATE
    EmbeddedCppFramework
)

add_executable(
    utility_test
    tests/utility_test.cpp
)

target_link_libraries(
    utility_test
    PRIVATE
    EmbeddedCppFramework
)