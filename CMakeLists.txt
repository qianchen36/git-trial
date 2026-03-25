cmake_minimum_required(VERSION 3.21)

project(git-trial)

add_executable(
    git-trial
    src/main.cpp
)

target_include_directories(
    git-trial
PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)
