#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <iterator>
#include <stdint.h>


class Data
{
    public :
        Data();
        std::string str;
        uintptr_t integer;
        ~Data();

};

#endif 
