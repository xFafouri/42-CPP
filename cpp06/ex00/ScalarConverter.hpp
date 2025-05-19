#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cstdlib> 
#include <cctype>
class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
    public:
        static void convert(const std::string &literal);

};

#endif 
