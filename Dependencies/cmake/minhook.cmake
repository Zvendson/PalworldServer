# see https://cmake.org/cmake/help/latest/command/include_guard.html for easier understanding
include_guard()
include(FetchContent)


# defines git target information
FetchContent_Declare(
    minhook
    GIT_REPOSITORY https://github.com/TsudaKageyu/minhook.git
    GIT_TAG v1.3.3
)


# generates variables to minhook's git local files. Will set minhook_POPULATED to TRUE or FALSE
FetchContent_GetProperties(minhook)

if (minhook_POPULATED)
    return()
endif()


# clones the git
FetchContent_Populate(minhook)


# creating a lib project
add_library(minhook)


# grouping files into a variable which can be used as "${SOURCES}"
file(GLOB_RECURSE SOURCES
    "${minhook_SOURCE_DIR}/include/*.h"
    "${minhook_SOURCE_DIR}/src/*.h"
    "${minhook_SOURCE_DIR}/src/*.c"
)


# let them preview as a tree and put them into a filter called "source"
source_group(TREE "${minhook_SOURCE_DIR}" FILES ${SOURCES})


# setting the source files that are needed to build minhook
target_sources(minhook PRIVATE ${SOURCES})


# include the dirs where minhook can find the source files
target_include_directories(minhook PUBLIC "${minhook_SOURCE_DIR}/include/")