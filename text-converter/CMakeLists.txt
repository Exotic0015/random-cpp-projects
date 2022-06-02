cmake_minimum_required(VERSION 3.22)
project(text-converter)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/0320f517fd920866d918e564105d68fd4362040a.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(text-converter main.cpp functions.hpp)

add_executable(converter-tests tests.cpp functions.hpp)
target_link_libraries(converter-tests gtest_main)
