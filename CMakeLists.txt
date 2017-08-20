# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

# The version number.
set(EGXPhys_VERSION "0.1.1")

# Project's name
project(EGXPhys)

# Set the output folders
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})





#Build options static/dynamic and unit tests

option(EGXPHYS_STATIC_LIBRARY_ENABLE "EGXPhys static library" OFF)
if(EGXPHYS_STATIC_LIBRARY_ENABLE)
	message(STATUS "EGXPhys is a header only library. Set EGXPHYS_STATIC_LIBRARY_ENABLE with ON to build an optional static library.")
endif()

option(EGXPHYS_DYNAMIC_LIBRARY_ENABLE "EGXPHYS dynamic library" OFF)
if(EGXPHYS_DYNAMIC_LIBRARY_ENABLE)
	message(STATUS "EGXPhys is a header only library. Set EGXPHYS_DYNAMIC_LIBRARY_ENABLE ON to build an optional dynamic library.")
endif()

option(EGXPHYS_TEST_ENABLE "EGXPHYS test" OFF)
if(NOT EGXPHYS_TEST_ENABLE)
	message(STATUS "EGXPhys is a header only library. Set EGXPHYS_TEST_ENABLE ON to build and run the unit tests.")
endif()


#Compiler Options
option(EGXPHYS_TEST_ENABLE_CXX_98 "Enable C++ 98" OFF)
option(EGXPHYS_TEST_ENABLE_CXX_11 "Enable C++ 11" OFF)
option(EGXPHYS_TEST_ENABLE_CXX_14 "Enable C++ 14" OFF)
option(EGXPHYS_TEST_ENABLE_CXX_17 "Enable C++ 17" OFF)

set(CMAKE_CXX_STANDARD_REQUIRED ON)



#C++ build enviroment options






# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")
 




























# add the executable
add_executable(EGXPhys ${PROJECT_SOURCE_DIR}/tests/unitTest.cpp)