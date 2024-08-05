# INFO: This CMakeLists.txt builds all enabled subdirectories
cmake_minimum_required(VERSION 3.30.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
project("StarWars" CXX)

# INFO: Enable bounds checking.
# std::vector provides built-in bounds checking (already refactored)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=bounds -g")

# INFO: Switch for ASAN, set with -DENABLE_ASAN=ON
option(ENABLE_ASAN "Enable AddressSanitizer" OFF)

if(ENABLE_ASAN)
  # INFO: Enable ASAN and debug information
  # WARN: This is not compatible with valgrind
  add_compile_options(-fsanitize=address -g)
  add_link_options(-fsanitize=address)
  # INFO: Enable address sanitizer only for a single target
  # target_compile_options(target PRIVATE -fsanitize=address)
  # target_link_options(target PRIVATE -fsanitize=address)
else()
  # INFO: Enable debug information
  add_compile_options(-g)
endif()


# INFO: Strict compiler flags for improved error handling and warnings as errors
# WARN: Will only be enabled for GCC or clangd
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(
    -Wall
    -Wextra
    -Werror
    -pedantic
    -pedantic-errors
    -Wshadow
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wconversion
    -Wsign-conversion
    -Wnull-dereference
    -Wdouble-promotion
  )
endif()

# TODO: Enable tests. E.g. Gtext or Ctest https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

