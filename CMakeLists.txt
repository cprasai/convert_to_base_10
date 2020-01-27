cmake_minimum_required(VERSION 3.16.2)
project (conversion_algorithm)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_executable(convert ${SOURCES})
