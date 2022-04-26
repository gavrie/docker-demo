# README

External build:
1. `Dockerfile` with dynamic build - small but missing libs
2. `Dockerfile` with static build - bigger but works
3. `Dockerfile.bullseye-slim` with dynamic libs - works too (show layer sizes to compare)

Build in container:
1. `Dockerfile.build` works but huge
2. `Dockerfile.multistage` hallelujah