cmake_minimum_required(VERSION 3.6)
project(cppgraphics)
set(CMAKE_CXX_STANDARD 11)

find_package(glfw3 3.2 REQUIRED)
find_package(OpenGL REQUIRED)

set(SOURCE_FILES ${CMAKE_BINARY_DIR}/src/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(cppgraphics ${SOURCE_FILES})

target_include_directories(cppgraphics PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(cppgraphics ${OPENGL_gl_LIBRARY} glfw)
