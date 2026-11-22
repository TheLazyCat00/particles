# Build Raylib from its vendored source
raylib:
    make -C lib/raylib/vendor/raylib/src PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=STATIC

# Check the Zane project
check: raylib
    zane check

# Build and run the game
run: raylib
    zane run

# Clean Raylib's build artifacts
clean-raylib:
    make -C lib/raylib/vendor/raylib/src clean

# Default command
default: run
