#include <iostream>
#include <strstream>
#define XDEBUG
// Write to strstream instead of std::cout
std::strstream buf; // equivalent stream
#define XDEBUG_STD_OUT buf
#include "../include/xdebug.hpp"

int main(int argc, char const *argv[])
{

    int i = 0;
    int ii = 1;

    TRACE("test",0,5,3);
    TRACEV(i,ii,"test");
    DEBUG("TEST");
    DEBUGT("TEST");
    buf << "testing strstream";
    buf.freeze(true);

    std::cout << buf.str() << std::endl;

    return 0;
}