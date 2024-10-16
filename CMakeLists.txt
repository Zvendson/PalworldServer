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
project(PalworldServer)


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

add_subdirectory(Dependencies/versiondll)
add_subdirectory(Dependencies/PalSDK)

# Set them all to the "Dependencies" folder
set_target_properties(spdlog PROPERTIES FOLDER "Dependencies")
set_target_properties(minhook PROPERTIES FOLDER "Dependencies")
set_target_properties(versiondll PROPERTIES FOLDER "Dependencies")
set_target_properties(PalSDK PROPERTIES FOLDER "Dependencies")

##############
# PalManager #
##############


# Creating the dll project
add_library(PalManager SHARED)


# preprocessor definitions
add_compile_definitions(
    "NOMINMAX"
    "WIN32_LEAN_AND_MEAN"
    "UNICODE"
    "_UNICODE"
    "SPDLOG_WCHAR_TO_UTF8_SUPPORT"
)


# Setting project source files
file(GLOB_RECURSE PalManager_SOURCES
    "include/*.hpp"
    "source/*.hpp"
    "source/*.cpp"
)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${PalManager_SOURCES})
target_sources(PalManager PUBLIC ${PalManager_SOURCES})


# include paths
target_include_directories(PalManager PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${json_SOURCE_DIR}/single_include/"
)


# dependencies
add_dependencies(PalManager
    versiondll
)
target_link_libraries(PalManager PUBLIC
    spdlog
    minhook    
    dbghelp.lib
    PalSDK
)


# Set linker options
target_link_options(PalManager PUBLIC
    "/SUBSYSTEM:WINDOWS"
    /SAFESEH:NO
)


# Set compiler options
target_compile_options(PalManager PUBLIC  
    /W3
)


# set PalManager as startup project // TODO: Create a PalServer.exe wrapper and set it as startup project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT PalManager)
