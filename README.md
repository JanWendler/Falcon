[![ci](https://github.com/JanWendler/Falcon/actions/workflows/tests.yml/badge.svg)](https://github.com/JanWendler/Falcon/actions/workflows/tests.yml)

This is a modified Falcon implementation that alows the code to be converted to VHDL via HLS.
Vitis HLS is used to convert the code. 
Many changes had to be made to make the Falcon code convertable. 

HLS does not allow for:
- recursion
- function pointers
- dynamic memory allocation (malloc, alloc, free)
- restrict

