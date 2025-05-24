#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <list>
#include <iostream>


template<typename T>
void easyfind(T param , int value)
{
    int flag = 0;
    for(typename T::iterator it = param.begin(); it != param.end(); it++)
    {
        if (*it == value)
        {
            std::cout << value  << " is found" << std::endl;
            flag = 1;
        }
    }
    try {
        if (!flag)
            throw std::out_of_range("");
    }
    catch(std::exception &e)
    {
        std::cout << value << " is not found !" << std::endl;
    }
}


#endif