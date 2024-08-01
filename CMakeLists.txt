# INFO: This CMakeLists.txt builds all enabled subdirectories
cmake_minimum_required(VERSION 3.30.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("StarWars" CXX)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

