# see https://cmake.org/cmake/help/latest/command/include_guard.html for easier understanding
include_guard()
include(FetchContent)


# defines git target information
FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG v1.14.1
    GIT_SHALLOW 1
)


# generates variables to spdlog's git local files. Will set spdlog_POPULATED to TRUE or FALSE
FetchContent_GetProperties(spdlog)

if (spdlog_POPULATED)
    return()
endif()


# clones the git
FetchContent_Populate(spdlog)


# creating a lib project
add_library(spdlog)


# grouping files into a variable which can be used as "${SOURCES}"
file(GLOB_RECURSE SOURCES
    "${spdlog_SOURCE_DIR}/include/*.h"
    "${spdlog_SOURCE_DIR}/src/*.cpp"
)


# let them preview as a tree and put them into a filter called "source"
source_group(TREE "${spdlog_SOURCE_DIR}" FILES ${SOURCES})


# setting the source files that are needed to build spdlog
target_sources(spdlog PRIVATE ${SOURCES})


# spdlog preprocessor definitions
target_compile_definitions(spdlog PRIVATE 
    "SPDLOG_COMPILED_LIB"
)


# include the dirs where spdlog can find the source files
target_include_directories(spdlog PUBLIC "${spdlog_SOURCE_DIR}/include/")


# Setting spdlog compile options
target_compile_options(spdlog PRIVATE
    /MP 
    /permissive-
)