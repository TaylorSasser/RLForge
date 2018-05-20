cmake_minimum_required(VERSION 3.9)
project("Application")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_STANDARD 17)

add_executable(Application Core/Application.cpp)