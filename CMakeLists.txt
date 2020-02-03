# Set the minimum version of cmake required to build this project
cmake_minimum_required(VERSION 3.15)

# Set the project name
project(FIRST_GTK_APP)

# Add the executable
add_executable(Main main.cpp)

# Use the package PkgConfig to detect GTK+ headers/library files
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK REQUIRED gtk+-3.0)

# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
INCLUDE_DIRECTORIES(${GTK_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK_LIBRARY_DIRS})

# Add other flags to the compiler
ADD_DEFINITIONS(${GTK_CFLAGS_OTHER})

# Link the target to the GTK+ libraries
TARGET_LINK_LIBRARIES(Main ${GTK_LIBRARIES})

