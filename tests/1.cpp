#include <iostream>
#include <fstream>

#define XDEBUG
#include "../include/xdebug.hpp"

int main(int argc, char const *argv[])
{
    int i = 1;
    int ii = 0;
    
    TRACE("test",0,5,3);
    TRACEV(i,ii,"test");
    DEBUG("TEST");
    DEBUGT("TEST");
    return 0;
}