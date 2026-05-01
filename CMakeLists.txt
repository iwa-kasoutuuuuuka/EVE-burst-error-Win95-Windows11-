cmake_minimum_required(VERSION 3.15)
project(eve_wrapper LANGUAGES CXX)

# Force 32-bit (x86) build - CRITICAL: game is 32-bit
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR
        "This MUST be built as 32-bit (x86). Use: cmake -A Win32 ..")
endif()

set(CMAKE_CXX_STANDARD 17)

# Build as a DLL
add_library(version SHARED version.cpp)

# Link required system libraries
target_link_libraries(version PRIVATE kernel32 user32 gdi32)

# Output name must be "version" (produces version.dll)
set_target_properties(version PROPERTIES
    OUTPUT_NAME "version"
    SUFFIX ".dll"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG   "${CMAKE_BINARY_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/bin"
)

# Post-build: output stays in the current bin folder or copied to project root
add_custom_command(TARGET version POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:version>"
        "${CMAKE_SOURCE_DIR}/version.dll"
    COMMENT "Deploying version.dll to project root"
)
