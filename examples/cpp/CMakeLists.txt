set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg_installed/x64-linux/")

cmake_minimum_required(VERSION 3.10)
project(leetcode_solution_wrapper)

set(CMAKE_CXX_STANDARD 23)

find_package(nlohmann_json CONFIG REQUIRED)

add_executable(two-sum two-sum.cpp)
target_link_libraries(two-sum PRIVATE nlohmann_json::nlohmann_json)

add_executable(spiral-matrix spiral-matrix.cpp)
target_link_libraries(spiral-matrix PRIVATE nlohmann_json::nlohmann_json)