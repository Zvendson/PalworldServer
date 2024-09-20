# see https://cmake.org/cmake/help/latest/command/include_guard.html for easier understanding
include_guard()
include(FetchContent)


# defines git target information
FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.3
    GIT_SHALLOW 1
)


# generates variables to json's git local files. Will set json_POPULATED to TRUE or FALSE
FetchContent_GetProperties(json)

if (json_POPULATED)
    return()
endif()


# clones the git
FetchContent_Populate(json)