#include <thread>
#include <chrono>
#include <iostream>
#include <fstream>
#define XDEBUG

#include "../include/xdebug.hpp"


void test(float t){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    DEBUGT("test",t);
}
void testp(){
    DEBUGT("testp");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    DEBUGT("testp2");
}


int main(int argc, char const *argv[])
{
    DEBUGT("MAIN");
    std::thread t1(test, 5.5), t2(testp);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 0;
}
