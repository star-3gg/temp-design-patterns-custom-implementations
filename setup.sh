#!/bin/sh

# INFO: Build with ASAN for fast memory analysis
# INFO: Build the project with ASAN
cmake -B build -DENABLE_ASAN=ON
cmake --build build

# INFO: Execute bult binaries
./build/src/StarWars

# INFO: Build with valgrind for slower but deeper memory analysis, Might catch things that ASAN won't
# INFO: Build the project without ASAN
# rm -rdf build
cmake -B build -DENABLE_ASAN=OFF
cmake --build build

# INFO: Execute bult binaries with valgrind
valgrind --leak-check=full -s ./build/src/StarWars
