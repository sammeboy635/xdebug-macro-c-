#include <iostream>
#include <fstream>

#define XDEBUG
#include "../include/xdebug.hpp"
#define FUNC_DEF(func) { func, #func },

int64_t loop(int loopcount){
    int64_t sum = 0;
    for(int i = 0; i < loopcount; i++){
        sum += i;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int i = 1;
    int ii = 0;
    
    TRACE("test",0,5,3);
    TRACEV(i,ii,"test");
    DEBUG("TEST");
    DEBUGT("TEST");
    // Run EXECUTE and save results to a variable
    int64_t sum = EXECUTE(loop, 100000);
    std::cout << "Sum : " << sum << std::endl;
    return 0;
}