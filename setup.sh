#!/bin/sh

# INFO: Build the project
cmake -B build -S .
make -C build

# INFO: Execute bult binaries
valgrind --leak-check=full ./build/src/StarWars

# INFO: Attach to running container using compose
#podman-compose run --rm star_wars bash
