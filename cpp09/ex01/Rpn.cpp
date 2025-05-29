#include "Rpn.hpp"
#include <cctype>
#include <cstring>

Rpn::Rpn()
{
    std::cout << "Rpn constructed !" << std::endl;
}

Rpn::Rpn(const Rpn &obj)
{
    *this = obj;
}

Rpn &Rpn::operator=(const Rpn &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

bool Rpn::check_ifoperator(std::string operators)
{
    if (operators == "+" || operators == "*" || operators == "/" || operators == "-")
        return true;
    return false;
}

int Rpn::calcul(int left , int right)
{
    if (!std::strcmp(operators.c_str(), "+"))
        return left + right;
    if (!std::strcmp(operators.c_str(), "-"))
        return left - right;
    if (!std::strcmp(operators.c_str(), "*"))
        return left * right;
    if (!std::strcmp(operators.c_str(), "/") && right != 0)
        return left / right;
    return -1;
}

bool Rpn::check_numbers(std::string token)
{
    if (token.length() == 1 && std::isdigit(token[0]))
        return true;
    return false;
}

Rpn::~Rpn()
{
    std::cout << "Rpn destructed !" << std::endl;
}
