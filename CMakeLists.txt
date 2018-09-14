cmake_minimum_required(VERSION 3.7)
project(cpplearn)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)
add_executable(APP src/main.cpp src/fillcontext.cpp src/Help.cpp)
