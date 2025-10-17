cmake_minimum_required(VERSION 3.10)
project(zenoh_precomputed_error)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

include_directories(include)

find_package(zenohc REQUIRED)
find_package(zenohcxx REQUIRED)

add_executable(main src/main.cpp src/sample.cpp)
target_link_libraries(main zenohcxx::zenohc)
