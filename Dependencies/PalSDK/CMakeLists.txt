################
# PalServerSDK #
################


# Creating the dll project
add_library(PalServerSDK)


# preprocessor definitions
add_compile_definitions(
    "NOMINMAX"
    "WIN32_LEAN_AND_MEAN"
    "UNICODE"
    "_UNICODE"
)


# Setting project source files
file(GLOB_RECURSE PalServerSDK_SOURCES
    "include/*.hpp"
    "include/*.inl"
    "source/*.cpp"
)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${PalServerSDK_SOURCES})
target_sources(PalServerSDK PUBLIC ${PalServerSDK_SOURCES})


# include paths
target_include_directories(PalServerSDK PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)


# Set linker options
target_link_options(PalServerSDK PUBLIC
    "/SUBSYSTEM:WINDOWS"
    /SAFESEH:NO
)


# Set compiler options
target_compile_options(PalServerSDK PUBLIC
    /MP 
    /permissive-
    /bigobj
    /W3
)
