##########
# PalSDK #
##########


# Creating the dll project
add_library(PalSDK)


# preprocessor definitions
add_compile_definitions(
    "NOMINMAX"
    "WIN32_LEAN_AND_MEAN"
    "UNICODE"
    "_UNICODE"
)


# Setting project source files
file(GLOB PalSDK_SOURCES
    "include/PalServerSDK.hpp"
    "include/PalSDK/NameCollisions.inl"
    "include/PalSDK/Basic.hpp"
    "include/PalSDK/CoreUObject_classes.hpp"
    "include/PalSDK/CoreUObject_parameters.hpp"
    "include/PalSDK/CoreUObject_structs.hpp"
    "include/PalSDK/Engine_classes.hpp"
    "include/PalSDK/Engine_parameters.hpp"
    "include/PalSDK/Engine_structs.hpp"
    "include/PalSDK/OnlineSubsystemUtils_classes.hpp"
    "include/PalSDK/OnlineSubsystemUtils_parameters.hpp"
    "include/PalSDK/OnlineSubsystemUtils_structs.hpp"
    "include/PalSDK/Pal_classes.hpp"
    "include/PalSDK/Pal_parameters.hpp"
    "include/PalSDK/Pal_structs.hpp"
    "include/PalSDK/PropertyFixup.hpp"
    "include/PalSDK/UnrealContainers.hpp"
    "source/Basic.cpp"
    "source/CoreUObject_functions.cpp"
    "source/Engine_functions.cpp"
    "source/OnlineSubsystemUtils_functions.cpp"
    "source/Pal_functions.cpp"
    # "include/PalSDK/HttpBlueprint_classes.hpp" Looks interesting for RESTAPI?
    # "include/PalSDK/HttpBlueprint_parameters.hpp"
    # "include/PalSDK/HttpBlueprint_structs.hpp"
    # "source/HttpBlueprint_functions.cpp"
)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${PalSDK_SOURCES})
target_sources(PalSDK PUBLIC ${PalSDK_SOURCES})


# include paths
target_include_directories(PalSDK PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)


# Set linker options
target_link_options(PalSDK PUBLIC
    "/SUBSYSTEM:WINDOWS"
    /SAFESEH:NO
)


# Set compiler options
target_compile_options(PalSDK PUBLIC
    /MP 
    /permissive-
    /bigobj
    /W3
)
