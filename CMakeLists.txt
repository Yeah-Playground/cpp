cmake_minimum_required(VERSION 3.0.0)
project(cpptest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cpptest main.cc
                src/dog.cc
                src/operators.cc
                src/MyString.cc                       
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

target_include_directories(cpptest PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(CPack)
