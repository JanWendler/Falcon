cmake_minimum_required(VERSION 3.21)
project(Falcon_impl_20211101)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE on )
include(cmake/GTest.cmake)
fetch_gtest()

set(FalconSource codec.c common.c config.h falcon.c falcon.h fft.c fpr.c fpr.h inner.h keygen.c rng.c shake.c sign.c vrfy.c)

set(TestFalconSource test_falcon.c ${FalconSource})
add_executable(TestFalcon ${TestFalconSource})
target_compile_options(TestFalcon PRIVATE -pedantic -O0 -Wall )

set(SpeedFalconSource speed.c ${FalconSource} )
add_executable(SpeedFalcon ${SpeedFalconSource})
target_compile_options(SpeedFalcon PRIVATE -pedantic -O3 -Wall )

set(GTestFalconSource gtest_falcon.cpp ${FalconSource})
add_executable(GTestFalcon ${GTestFalconSource})
target_link_libraries(GTestFalcon gtest_main)
gtest_discover_tests(GTestFalcon)
