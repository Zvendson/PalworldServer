# enable MASM support to compile .asm files
enable_language(ASM_MASM)


# Creating the dll project
add_library(versiondll SHARED)


# Rename output dll to "version.dll", because PalServer.exe will auto load it.
set_target_properties(versiondll PROPERTIES OUTPUT_NAME "version")


# Setting project source files
file(GLOB_RECURSE VERSION_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/version.def"
    "${CMAKE_CURRENT_SOURCE_DIR}/version.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/version.asm"
    "${CMAKE_CURRENT_SOURCE_DIR}/dllmain.cpp"
)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${VERSION_SOURCES})
target_sources(versiondll PUBLIC ${VERSION_SOURCES})


# we need to link the .def file for the assembly
set_target_properties(versiondll PROPERTIES LINK_FLAGS "/DEF:${CMAKE_CURRENT_SOURCE_DIR}/version.def")
set_source_files_properties(version.def PROPERTIES HEADER_FILE_ONLY TRUE)


# Setting .asm properties to compile it actually 
set_source_files_properties(
    "version.asm"
    PROPERTIES COMPILE_FLAGS "/Zi /W3 /errorReport:prompt"
)


# include paths
target_include_directories(versiondll PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
)


# Set linker options
target_link_options(versiondll PUBLIC
    "/SUBSYSTEM:WINDOWS"
    /SAFESEH:NO
)


# Set compiler options
target_compile_options(versiondll PUBLIC  
    /W3
)
