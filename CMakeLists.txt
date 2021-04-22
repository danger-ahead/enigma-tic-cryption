cmake_minimum_required(VERSION 3.16.3)
project(enigma_tic_cryption)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(enigma_tic_cryption
        main.cpp
        steckerbrett.cpp
        steckerbrett.h
        workspace.code-workspace)
