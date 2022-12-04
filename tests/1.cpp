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