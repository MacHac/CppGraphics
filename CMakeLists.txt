cmake_minimum_required(VERSION 3.6)
project(cppgraphics)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ${CMAKE_BINARY_DIR}/src/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(cppgraphics ${SOURCE_FILES})
