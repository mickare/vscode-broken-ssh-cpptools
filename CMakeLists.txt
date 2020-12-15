cmake_minimum_required(VERSION 3.5.0)
project(myproject VERSION 0.1.0)

## Compile as C++17
add_compile_options(-std=c++17)

include(CTest)
enable_testing()

add_executable(myproject 
    src/myproject/main.cpp
    src/myproject/header.cpp    
)

target_include_directories(myproject PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
