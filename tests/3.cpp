#include <iostream>
#include <fstream>

#define XDEBUG
// Write to file instead of std::cout
std::ofstream of = std::ofstream("xdebug.log");
#define XDEBUG_STD_OUT of
#include "../include/xdebug.hpp"

int main(int argc, char const *argv[])
{
    std::atexit([](){
        of.close();
    });
    int i = 1;
    int ii = 0;
    
    TRACE("test",0,5,3);
    TRACEV(i,ii,"test");
    DEBUG("TEST");
    DEBUGT("TEST");
    return 0;
}