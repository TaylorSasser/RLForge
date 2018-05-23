cmake_minimum_required(VERSION 3.9)
project("Application")

set(COMPILE_FLAGS "-Wno-conversion-null -m32")
set(LINKER_FLAGS  "-static-libgcc -static-libstdc++ -m32")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_STANDARD 17)


add_executable(Application Core/Application.cpp)
set_target_properties(Application PROPERTIES COMPILE_FLAGS ${COMPILE_FLAGS} LINK_FLAGS ${LINKER_FLAGS})
