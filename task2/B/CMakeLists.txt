cmake_minimum_required(VERSION 3.0)

project(myLib)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib)

set(SOURCE_LIB lib.cpp)

add_library(myLib SHARED ${SOURCE_LIB})	