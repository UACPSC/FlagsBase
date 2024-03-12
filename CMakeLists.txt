# @file CMakeLists.txt
# 
# CMake file for comparisons

cmake_minimum_required(VERSION 3.28)

# project info
project(Comparisons)

# Force debug build since used for exploring behavior
set(CMAKE_BUILD_TYPE Debug)

add_executable(ComparisonsTest)
target_sources(ComparisonsTest PRIVATE ComparisonsTest.cpp Comparisons.cpp)
target_compile_features(ComparisonsTest PRIVATE cxx_std_17)
target_compile_options(ComparisonsTest PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/Wall>
    $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall>
)
