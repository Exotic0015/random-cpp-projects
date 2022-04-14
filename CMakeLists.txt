cmake_minimum_required(VERSION 3.23)
project(random-cpp-projects)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory("${PROJECT_SOURCE_DIR}/hello-world" "${PROJECT_SOURCE_DIR}/hello-world/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/pseudorandom-password-generator" "${PROJECT_SOURCE_DIR}/pseudorandom-password-generator/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/fizzbuzz" "${PROJECT_SOURCE_DIR}/fizzbuzz/output")