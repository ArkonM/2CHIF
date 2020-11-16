cmake_minimum_required(VERSION 3.5)
project(primes)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(primes ${SOURCES})


add_compile_options(-Wpedantic)
