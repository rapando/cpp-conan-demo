cmake_minimum_required(VERSION 3.8)

project(db CXX)
set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(db main.cpp)
target_link_libraries(db ${CONAN_LIBS})