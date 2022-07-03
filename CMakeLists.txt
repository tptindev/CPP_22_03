cmake_minimum_required(VERSION 3.0.0)
project(algorithms VERSION 0.1.0 DESCRIPTION "Algorithms" LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "src/*.cpp")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(algorithms main.cpp ${SOURCES})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_11)

