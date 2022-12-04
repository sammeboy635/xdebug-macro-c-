#ifndef XDEBUG_H
#define XDEBUG_H

#include <iostream>

    /* Set your own std::ostream& STD_OUT */
    #ifndef XDEBUG_STD_OUT 
        std::ostream& STD_OUT = std::cout;
    #else
        extern std::ostream& STD_OUT;
    #endif

    #if defined XDEBUG
        /* debug print just for comments */
        #define DEBUG(...) [](const auto&...x){STD_OUT << "Debug : ";((STD_OUT << x),...); STD_OUT << std::endl; }(__VA_ARGS__);
        /* trace value outputs __FILE__ __LINE__ and variables names and variable values*/
        #define TRACEV(...) [](const auto&...x){ STD_OUT << __FILE__<<":"<<__LINE__<<" : " << __FUNCTION__ <<" ||"; char c='='; STD_OUT <<#__VA_ARGS__ << ", "; STD_OUT << "= "; ((STD_OUT << x <<", "),...); STD_OUT << std::endl; }(__VA_ARGS__);
        /* trace outputs __FILE__ __LINE__ and variable values*/
        #define TRACE(...) [](const auto&...x){ STD_OUT << __FILE__<<":"<<__LINE__<<" : " << __FUNCTION__ <<" |";(( STD_OUT <<"|" << x ), ...); STD_OUT << std::endl; }(__VA_ARGS__);
    #else
        /* off debug statement */
        #define DEBUG(...) return 0
        /* off trace statement */
        #define TRACEV(...) return 0
        /* off trace statement */
        #define TRACE(...) return 0
    #endif

#endif