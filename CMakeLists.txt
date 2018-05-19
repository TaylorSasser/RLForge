cmake_minimum_required(VERSION 3.9)
project("RLForge/RLForge")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS -m32)
set(CMAKE_CXX_FLAGS -m32)


set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMake/${CMAKE_MODULE_PATH})
set(RLFORGE_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(RLFORGE_APP ${RLFORGE_ROOT}/Application)
set(RLFORGE_DLL ${RLFORGE_ROOT}/RLForge)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)

add_subdirectory(RLForge/RLForge)
add_subdirectory(RLForge/Application)

set_target_properties(RLForge PROPERTIES PREFIX "")
set_target_properties(Application PROPERTIES PREFIX "")

set_target_properties(RLForge PROPERTIES OUTPUT_NAME "RLForge")
set_target_properties(Application PROPERTIES OUTPUT_NAME "RLForgeLoader")