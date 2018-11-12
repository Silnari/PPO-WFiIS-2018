cmake_minimum_required( VERSION 2.8 )

project (run)
file(GLOB source ${PROJECT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(run Main.cpp ${source})

add_compile_options(-g -Wall -pedantic -D DELETE)

set(CMAKE_PROJECT_NAME ${PROJECT_NAME})