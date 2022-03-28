[![ci](https://github.com/JanWendler/Falcon/actions/workflows/tests.yml/badge.svg)](https://github.com/JanWendler/Falcon/actions/workflows/tests.yml)
[![Language grade: C++](https://img.shields.io/lgtm/grade/cpp/github/cpp-best-practices/cpp_starter_project)]
![LGTM Grade](https://img.shields.io/lgtm/grade/cpp/github/JanWendler/Falcon?label=Code%20Quality)

This is a modified Falcon implementation that alows the code to be converted to VHDL via HLS.
Vitis HLS is used to convert the code. 
Many changes had to be made to make the Falcon code convertable. 

HLS does not allow for:
- recursion
- function pointers
- dynamic memory allocation (malloc, alloc, free)
- restrict

The Code can not be converted just yet, as the recursions is quite tricky to convert to an iterative form
