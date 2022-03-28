cmake_minimum_required(VERSION 3.21)
project(Falcon_impl_20211101)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-O3")

set(TestFalcon codec.c common.c config.h falcon.c falcon.h fft.c fpr.c fpr.h inner.h keygen.c rng.c shake.c sign.c test_falcon.c vrfy.c)
add_executable(TestFalcon ${TestFalcon})

set(SpeedFalcon codec.c common.c config.h falcon.c falcon.h fft.c fpr.c fpr.h inner.h keygen.c rng.c shake.c sign.c speed.c vrfy.c)
add_executable(SpeedFalcon ${SpeedFalcon})
target_compile_options(SpeedFalcon PRIVATE -O3)

