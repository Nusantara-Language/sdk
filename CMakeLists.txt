cmake_minimum_required(VERSION 3.30.1)

project(
    nusantara
    VERSION 1.0.0
    DESCRIPTION "Indonesian Programming Language"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(nusantara)

target_include_directories(nusantara PRIVATE include)

file(GLOB_RECURSE SRC_FILES
    "src/*.cc"
)

target_sources(nusantara PRIVATE ${SRC_FILES})

set_target_properties(nusantara PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)