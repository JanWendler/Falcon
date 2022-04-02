![GitHub Workflow Status](https://img.shields.io/github/workflow/status/JanWendler/Falcon/Build%20and%20Test?label=Build%20and%20Tests&logo=Github)
![LGTM Grade](https://img.shields.io/lgtm/grade/cpp/github/JanWendler/Falcon?label=Code%20Quality&logo=LGTM)

This is a modified Falcon implementation that alows the code to be converted to VHDL via HLS.
Vitis HLS is used to convert the code. 
Many changes had to be made to make the Falcon code convertable. 

HLS does not allow for:
- recursion
- function pointers
- dynamic memory allocation (malloc, alloc, free)
- restrict

The Code can not be converted just yet, as the recursions is quite tricky to convert to an iterative form