cmake_minimum_required(VERSION 3.9)
project("RLForge")

set(COMPILE_FLAGS "-Wno-non-template-friend")


##############################################

set(SOURCE_CORE     Core/DLLMain.cpp
                    Core/Core.cpp)

set(HEADER_CORE     Core/Core.h)

file(GLOB Core ${SOURCE_CORE} ${HEADER_CORE})
source_group(Core\\Core FILES ${Core})
#############################################

set(SOURCE_META)

set(HEADER_META     Meta/TypeErasure.hpp)

file(GLOB Meta ${SOURCE_META} ${HEADER_META})
source_group(Core\\Meta FILES ${Meta})
#############################################

set(SOURCE_MODULE)

set(HEADER_MODULE   Module/ModBase.hpp
                    Module/Mods/TestMod.hpp)

file(GLOB Module ${SOURCE_MODULE} ${HEADER_MODULE})
source_group(Core\\Module FILES ${Module})
##############################################

set(SOURCE_PATTERN  Pattern/SignatureFinder.cpp)

set(HEADER_PATTERN  Pattern/SignatureFinder.hpp)

file(GLOB Pattern ${SOURCE_PATTERN} ${HEADER_PATTERN})
source_group(Core\\Pattern FILES ${Pattern})
##############################################

set(SOURCE_SDK      RL/SDK/RL_AkAudio_functions.cpp
                    RL/SDK/RL_Basic.cpp
                    RL/SDK/RL_Core_functions.cpp
                    RL/SDK/RL_Engine_functions.cpp
                    RL/SDK/RL_GameFramework_functions.cpp
                    RL/SDK/RL_GFxUI_functions.cpp
                    RL/SDK/RL_IpDrv_functions.cpp
                    RL/SDK/RL_OnlineSubsystemSteamworks_functions.cpp
                    RL/SDK/RL_TAGame_functions.cpp
                    RL/SDK/RL_XAudio2_functions.cpp
                    RL/SDK/RL_ProjectX_functions.cpp
                    RL/SDK/RL_WinDrv_functions.cpp)

set(HEADER_SDK      RL/SDK.hpp
                    RL/SDK/RL_AkAudio_classes.hpp
                    RL/SDK/RL_AkAudio_parameters.hpp
                    RL/SDK/RL_AkAudio_structs.hpp
                    RL/SDK/RL_Basic.hpp
                    RL/SDK/RL_Core_classes.hpp
                    RL/SDK/RL_Core_parameters.hpp
                    RL/SDK/RL_Core_structs.hpp
                    RL/SDK/RL_Engine_classes.hpp
                    RL/SDK/RL_Engine_parameters.hpp
                    RL/SDK/RL_Engine_structs.hpp
                    RL/SDK/RL_GameFramework_classes.hpp
                    RL/SDK/RL_GameFramework_parameters.hpp
                    RL/SDK/RL_GameFramework_structs.hpp
                    RL/SDK/RL_GFxUI_classes.hpp
                    RL/SDK/RL_GFxUI_parameters.hpp
                    RL/SDK/RL_GFxUI_structs.hpp
                    RL/SDK/RL_IpDrv_classes.hpp
                    RL/SDK/RL_IpDrv_parameters.hpp
                    RL/SDK/RL_IpDrv_structs.hpp
                    RL/SDK/RL_OnlineSubsystemSteamworks_classes.hpp
                    RL/SDK/RL_OnlineSubsystemSteamworks_parameters.hpp
                    RL/SDK/RL_OnlineSubsystemSteamworks_structs.hpp
                    RL/SDK/RL_ProjectX_classes.hpp
                    RL/SDK/RL_ProjectX_parameters.hpp
                    RL/SDK/RL_ProjectX_structs.hpp
                    RL/SDK/RL_TAGame_classes.hpp
                    RL/SDK/RL_TAGame_parameters.hpp
                    RL/SDK/RL_TAGame_structs.hpp
                    RL/SDK/RL_WinDrv_classes.hpp
                    RL/SDK/RL_WinDrv_parameters.hpp
                    RL/SDK/RL_WinDrv_structs.hpp
                    RL/SDK/RL_XAudio2_classes.hpp
                    RL/SDK/RL_XAudio2_parameters.hpp
                    RL/SDK/RL_XAudio2_structs.hpp)

file(GLOB SDK ${SOURCE_SDK} ${HEADER_SDK})
source_group(Core\\SDK FILES ${SDK})
##############################################

set(SOURCE_LIB      ${SOURCE_CORE}
                    ${SOURCE_META}
                    ${SOURCE_PATTERN}
                    ${SOURCE_MODULE})

set(HEADER_LIB      ${HEADER_CORE}
                    ${HEADER_META}
                    ${HEADER_PATTERN}
                    ${HEADER_MODULE})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_STANDARD 17)

add_library(RLForge SHARED ${SOURCE_LIB} ${HEADER_LIB})
set_target_properties(RLForge PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
target_link_libraries(RLForge Psapi)