# INFO: This CMakeLists.txt builds all enabled subdirectories
cmake_minimum_required(VERSION 3.30.1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
project("StarWars" CXX)

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
  # Enable debug information
  add_compile_options(-g)
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

