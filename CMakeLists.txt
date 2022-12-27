cmake_minimum_required(VERSION 3.25)
project(hello-world LANGUAGES CXX VERSION 1.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

enable_language(ASM_NASM)
find_package(Threads REQUIRED)

add_executable(hello-world main.cpp)
target_link_libraries(hello-world Threads::Threads)
