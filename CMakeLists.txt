cmake_minimum_required(VERSION 3.21)
project(Falcon_impl_20211101)

set(CMAKE_CXX_STANDARD 20)

include(cmake/GTest.cmake)
fetch_gtest()

set(FalconSource codec.c common.c config.h falcon.c falcon.h fft.c fpr.c fpr.h inner.h keygen.c rng.c shake.c sign.c vrfy.c)
add_library(Falcon ${FalconSource})

set(TestFalconSource test_falcon.c)
add_executable(TestFalcon ${TestFalconSource})
target_link_libraries(TestFalcon Falcon)

set(SpeedFalconSource speed.c)
add_executable(SpeedFalcon ${SpeedFalconSource})
target_link_libraries(SpeedFalcon Falcon)
target_compile_options(SpeedFalcon PRIVATE -O3)

set(GTestFalconSource gtest_falcon.cpp ${FalconSource})
add_executable(GTestFalcon ${GTestFalconSource})
target_link_libraries(GTestFalcon gtest_main)
gtest_discover_tests(GTestFalcon)
