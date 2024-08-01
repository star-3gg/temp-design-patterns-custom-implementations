#!/bin/sh

# WARN: If you use docker-compose, replace `podman-compose` with `docker-compose`

# INFO: Run project (interactive terminal)
# podman-compose up

# INFO: Attach to running container using compose (opens shell in container)
# podman-compose run --rm star_wars bash

# INFO: Rebuild docker image
# podman-compose down && podman-compose up --build
