# @file CMakeLists.txt
#
# CMake file for comparisons test

# Assume that each .cpp file is a separate test
file(GLOB TESTS "*.cpp")
foreach(TEST ${TESTS})

    get_filename_component(TESTNAME "${TEST}" NAME_WLE)

    # Build each executable
    add_executable(${TESTNAME})
    target_sources(${TESTNAME} PRIVATE ${TESTNAME}.cpp ${CMAKE_SOURCE_DIR}/Comparisons.cpp)
    target_include_directories(${TESTNAME} PRIVATE ${CMAKE_SOURCE_DIR})
    target_compile_features(${TESTNAME} PRIVATE cxx_std_17)

    # Create a test for each executable
    add_test(NAME ${TESTNAME} COMMAND $<TARGET_FILE:${TESTNAME}>)

endforeach()
