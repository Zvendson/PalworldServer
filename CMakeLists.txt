cmake_minimum_required(VERSION 3.16)


# Setting environment
set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS ON)
set(CMAKE_GENERATOR_PLATFORM x64)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Enable pdb file generation for Release
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")


# Creating the sln
project(Palworld)


# Making sure the project will be set to x64
if(NOT(CMAKE_SIZEOF_VOID_P EQUAL 8))
    message(FATAL_ERROR "You are configuring a non 64-bit build, this is not supported. Run cmake with `-A Win64`")
endif()


# When this property is enabled, CMake will generate folder structures in IDEs that support this feature (such as Visual Studio).
set_property(GLOBAL PROPERTY USE_FOLDERS ON)


# Adding the cmake folder to the cmake path files. It allows us to include(<filename>) them.
list(APPEND CMAKE_MODULE_PATH 
    "${PROJECT_SOURCE_DIR}/Dependencies/cmake"
)


# Redirecting the file output to /bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/")


# Adding the no incremental flag
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /INCREMENTAL:NO" )


# includes
include(spdlog)
include(minhook)
include(json)

add_subdirectory(Dependencies/PalSDK)


################
# PalServerAPI #
################


# enable MASM support to compile .asm files
enable_language(ASM_MASM)


# Creating the dll project
add_library(PalServerAPI SHARED)


# Rename output dll to "version.dll", because PalServer.exe will auto load it.
set_target_properties(PalServerAPI PROPERTIES OUTPUT_NAME "version")


# preprocessor definitions
add_compile_definitions(
    "NOMINMAX"
    "WIN32_LEAN_AND_MEAN"
    "UNICODE"
    "_UNICODE"
    "SPDLOG_WCHAR_TO_UTF8_SUPPORT"
)


# Setting project source files
file(GLOB_RECURSE SOURCES
    "include/*.hpp"
    "source/*.hpp"
    "source/*.cpp"
    "source/version/version.def"
    "source/version/version.h"
    "source/version/version.asm"
)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SOURCES})
target_sources(PalServerAPI PUBLIC ${SOURCES})


# we need to link the .def file for the assembly
set_target_properties(PalServerAPI PROPERTIES LINK_FLAGS "/DEF:${CMAKE_CURRENT_SOURCE_DIR}/source/version/version.def")
set_source_files_properties(version.def PROPERTIES HEADER_FILE_ONLY TRUE)


# Setting .asm properties to compile it actually 
set_source_files_properties(
    "source/version/version.asm"
    PROPERTIES COMPILE_FLAGS "/Zi /W3 /errorReport:prompt"
)


# include paths
target_include_directories(PalServerAPI PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/source"
    "${json_SOURCE_DIR}/single_include/"
)


# Link dependencies
target_link_libraries(PalServerAPI PUBLIC
    spdlog
    minhook    
    dbghelp.lib
    PalSDK
)


# Set linker options
target_link_options(PalServerAPI PUBLIC
    "/SUBSYSTEM:WINDOWS"
    /SAFESEH:NO
)


# Set compiler options
target_compile_options(PalServerAPI PUBLIC  
    /W3
)


# set PalServerAPI as startup project // TODO: Create a PalServer.exe wrapper and set it as startup project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT PalServerAPI)
