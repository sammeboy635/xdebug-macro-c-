
# xdebug


This code is setting up a simple debugging system. It defines three macros: DEBUG, TRACEV, and TRACE. These macros can be used to output debugging and trace information to an output stream. If XDEBUG is defined, then the macros will output the specified information, otherwise they will return 0. The code also sets up an output stream called STD_OUT, which is used to output debugging and trace information.

## Usage/Examples

```c++
#include <iostream>


#define XDEBUG
#define XDEBUG_STD_OUT // Custom STD_OUT
std::ostream& STD_OUT = std::cout; // SET STD_OUT Var
#include "../include/xdebug.hpp"

int main(int argc, char const *argv[])
{
    int i = 1;
    int ii = 0;
    
    TRACE("test",0,5,3);
    TRACEV(i,ii,"test");
    DEBUG("TEST");
    return 0;
}
/*
Console Output:
src/main.cpp:14 : operator() ||test|0|5|3
src/main.cpp:15 : operator() ||i,ii,"test" = 1, 0, test
Debug : TEST
*/

```


