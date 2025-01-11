# Minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyCProgram_test_2 VERSION 1.0)

# Spesify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Include directories (for header files)
include_directories(${CMAKE_SOURCE_DIR}/include)

# set Executable_name
set(EXECUTABLE_NAME latihan43)

# Source file
file(GLOB SOURCES
    ${CMAKE_SOURCE_DIR}/src/${EXECUTABLE_NAME}.c
)

# Add executable
add_executable(${EXECUTABLE_NAME}_out ${SOURCES})

# Optional: Add compiler warnings for debugging
if (CMAKE_C_COMPILER_ID STREQUAL "GNU" OR CMAKE_C_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${EXECUTABLE_NAME}_out PRIVATE -Wall -Wextra -pedantic)
elseif (CMAKE_C_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(${EXECUTABLE_NAME}_out PRIVATE /W4)
endif()

# Optional: Print summary
message(STATUS "Project Name: ${PROJECT_NAME}")
message(STATUS "CMake Version: ${CMAKE_VERSION}")
message(STATUS "C Compiler: ${CMAKE_C_COMPILER}")