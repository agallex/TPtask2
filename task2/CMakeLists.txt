cmake_minimum_required(VERSION 3.0)

project(C)

add_custom_command( 
  OUTPUT ${PROJECT_SOURCE_DIR}/A/index.h
  COMMAND python3 ${PROJECT_SOURCE_DIR}/A/preparing.py ${PROJECT_SOURCE_DIR}/A
  DEPENDS ${PROJECT_SOURCE_DIR}/A/preparing.py
)

set(SOURCE ${PROJECT_SOURCE_DIR}/C/main.cpp)
	
include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(${PROJECT_SOURCE_DIR}/B)	

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)


add_custom_target(RunGenerator DEPENDS ${PROJECT_SOURCE_DIR}/A/index.h)

add_executable(C ${SOURCE})
add_dependencies(C RunGenerator)
target_link_libraries(C myLib)	

target_include_directories(C PRIVATE ${CMAKE_BINARY_DIR})


set(SOURCE_TEST ${PROJECT_SOURCE_DIR}/C/main_test.cpp ${PROJECT_SOURCE_DIR}/C/main_test.h)
find_package(GTest REQUIRED)
add_executable(CTest ${SOURCE_TEST})
add_dependencies(CTest RunGenerator )
target_link_libraries(CTest GTest::GTest)
target_link_libraries(CTest myLib)	