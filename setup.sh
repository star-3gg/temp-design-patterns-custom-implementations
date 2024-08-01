#!/bin/sh

# INFO: Build the project
cmake -B build -S .
make -C build

# INFO: Execute bult binaries
./build/src/StarWars
