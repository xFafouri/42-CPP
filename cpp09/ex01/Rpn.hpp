#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <fstream>
#include <map>
#include <cstddef>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>

class Rpn
{
    public:
        std::stack<int> mystack;
        std::string token;
        std::string operators;
        int first;
        int second;
        Rpn();
        Rpn(const Rpn &obj);
        bool check_numbers(std::string token);
        int calcul(int first , int second);
        bool check_ifoperator(std::string operators);
        Rpn &operator=(const Rpn &obj);
        ~Rpn();
};

#endif 
