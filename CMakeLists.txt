cmake_minimum_required(VERSION 3.13)

project(sxy-plane VERSION 0.1 LANGUAGES CXX)
enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#add_subdirectory(source)
add_subdirectory(tests)
