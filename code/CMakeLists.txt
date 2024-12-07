cmake_minimum_required(VERSION 3.28)

project(helloWorldC VERSION 0.0.1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "-Werror -Wall -Wextra -O2")

add_subdirectory(src)
