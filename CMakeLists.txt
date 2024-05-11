### So loud CMakeLists.txt
cmake_minimum_required(VERSION 3.5)
project(SoLoud)
set(CMAKE_CXX_STANDARD 17)

# Add the SoLoud source files
file(GLOB_RECURSE SOURCES 
    "src/audiosource/*.c" "src/audiosource/*.cpp" "src/audiosource/*.h" "src/audiosource/*.hpp"
    "src/filter/*.c" "src/filter/*.cpp" "src/filter/*.h" "src/filter/*.hpp"
    "src/core/*.c" "src/core/*.cpp" "src/core/*.h" "src/core/*.hpp"
    "src/c_api/*.c" "src/c_api/*.cpp" "src/c_api/*.h" "src/c_api/*.hpp"
    # "src/tools/*.c" "src/tools/*.cpp" "src/tools/*.h" "src/tools/*.hpp"
    "src/backend/miniaudio/*.c" "src/backend/miniaudio/*.cpp" "src/backend/miniaudio/*.hpp"
)

# Add the SoLoud include directory
include_directories("include")

# Create the SoLoud library
add_library(SoLoud ${SOURCES})

# Add the SoLoud library to the include directories
target_include_directories(SoLoud PUBLIC "include")
target_include_directories(SoLoud PUBLIC "vendor/miniaudio")

