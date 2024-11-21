# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and C++ standard
project(GameProjectV2)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find nlohmann/json
find_path(JSON_INCLUDE_DIR nlohmann/json.hpp PATHS /usr/local/Cellar/nlohmann-json/3.11.3/include)
if (JSON_INCLUDE_DIR)
    include_directories(${JSON_INCLUDE_DIR})
else()
    message(FATAL_ERROR "nlohmann/json.hpp not found. Ensure nlohmann-json is installed.")
endif()

# Enable testing
enable_testing()

# Manually set the paths for Google Test
set(GTEST_ROOT /usr/local/Cellar/googletest/1.15.2)
include_directories(${GTEST_ROOT}/include)
link_directories(${GTEST_ROOT}/lib)

# Main Game Executable
file(GLOB_RECURSE GAME_SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
list(FILTER GAME_SOURCES EXCLUDE REGEX ".*main\\.cpp")

add_executable(Game src/main.cpp ${GAME_SOURCES})

# Add include directories for the game
target_include_directories(Game PRIVATE
    ${PROJECT_SOURCE_DIR}/include/Game
    ${PROJECT_SOURCE_DIR}/include/Game/States
    ${PROJECT_SOURCE_DIR}/include/Game/Managers
    ${PROJECT_SOURCE_DIR}/include/Game/Entities
    ${PROJECT_SOURCE_DIR}/include/Game/Components
    ${PROJECT_SOURCE_DIR}/include/Game/Core
)

# Test Executable (excludes main.cpp)
file(GLOB_RECURSE TEST_SOURCES "${PROJECT_SOURCE_DIR}/tests/*.cpp")
add_executable(GameTests ${TEST_SOURCES} ${GAME_SOURCES})

# Link Google Test to the test executable
target_link_libraries(GameTests PRIVATE gtest gtest_main pthread)

# Add include directories for the test executable
target_include_directories(GameTests PRIVATE
    ${PROJECT_SOURCE_DIR}/include/Game
    ${PROJECT_SOURCE_DIR}/include/Game/States
    ${PROJECT_SOURCE_DIR}/include/Game/Managers
    ${PROJECT_SOURCE_DIR}/include/Game/Entities
    ${PROJECT_SOURCE_DIR}/include/Game/Components
    ${PROJECT_SOURCE_DIR}/include/Game/Core
)

# Register tests with CTest
add_test(NAME AllTests COMMAND GameTests)
