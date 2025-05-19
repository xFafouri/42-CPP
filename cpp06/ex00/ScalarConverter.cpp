#include "ScalarConverter.hpp"
#include <cctype>
#include <iomanip>
#include <ios>

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter destructed !" << std::endl;
}

// ScalarConverter::ScalarConverter(const ScalarConverter &obj)
// {
//     *this = obj;
// }

// ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
// {
//     if (this != &obj)
//     {
        
//     }
//     return *this;
// }

int check_dot_digit(std::string literal, int &is_dot)
{
    int i = 0;
    is_dot = 0;
    while (i < literal.length() - 1)
    {
        if (literal[i] == '.')
        {
            is_dot++;
            i++;
        }
        if (!std::isdigit(literal[i]))
            return (false);
        i++;
    }
    if (is_dot > 1)
        return false;
    return(true);
}

bool isFloat(const std::string& str)
{
    if (str[str.length() - 1] != 'f')
        return false;

    std::string tmp = str.substr(0, str.length() - 1);
    int dotCount = 0;
    int i = 0;

    if (tmp[i] == '+' || tmp[i] == '-')
        i++;

    for (;i < tmp.length(); ++i)
    {
        if (tmp[i] == '.') 
        {
            dotCount++;
        } 
        else if (!std::isdigit(tmp[i])) 
        {
            return false;
        }
    }
    return dotCount == 1;
}


bool isDouble(const std::string& str) 
{
    int is_dot = 0;
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    for (;i < str.length(); ++i)
     {
        if (str[i] == '.') 
        {
            is_dot++;
        } 
        else if (!std::isdigit(str[i])) 
            return false;
    }
    return is_dot == 1;
}

bool isDigit(const std::string& literal)
{
    int i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while(i < literal.length())
    {
        if (!std::isdigit(literal[i]))
            return false;
        i++;
    }
    return true;
}

void ScalarConverter::convert(const std::string& literal)
{
    std::cout << literal << std::endl;
    if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "int: " << static_cast<int>(c) <<  std::endl;
        std::cout << "float: " << static_cast<float>(c)  << std::endl;
        std::cout << "double: " << static_cast<double>(c) <<  std::endl;
        
    }
    else if(isFloat(literal) || literal == "-inff" || literal == "+inff" || literal == "nanf")
    {
        if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        {
            std::cout << "char :" << " impossible" << std::endl; 
            std::cout << "double :" << " impossible" << std::endl; 
            std::cout << "int :" << " impossible" << std::endl;
            std::cout <<  "float : "  << literal << std::endl;
            return ;
        }
        // if (check_dot_digit(literal, is_dot) && literal[literal.length() - 1] == 'f' && literal.find('.') != std::string::npos)
        float f = std::stof(literal);
        if (std::isprint(static_cast<char>(f)))
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "double :" << std::fixed << std::setprecision(2) << static_cast<double>(f) << std::endl;
        std::cout << "int:" << static_cast<int>(f) << std::endl;
    }
    else if (isDouble(literal) || literal == "-inf" || literal == "+inf" || literal == "nan")
    {
        // else if (check_dot_digit(literal, is_dot) && literal.find('.') != std::string::npos)
        if (literal == "-inf" || literal == "+inf" || literal == "nan")
        {
            std::cout << "char :" << " impossible" << std::endl; 
            std::cout << "float : "  << "impossible" << std::endl;
            std::cout << "int :" << " impossible" << std::endl;
            std::cout << "double : " << literal << std::endl; 
            return ;
        }
        double d = std::stod(literal);

        if (std::isprint(static_cast<char>(d)))
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float :" << std::fixed << std::setprecision(2) << static_cast<float>(d) << 'f' << std::endl;
        std::cout << "int:" << static_cast<int>(d) << std::endl;
    }
    else if (isDigit(literal))
    {
        int i = std::atoi(literal.c_str());
        std::cout << "sad" << std::endl;
        if (std::isprint(static_cast<char>(i)))
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float :"<< std::fixed << std::setprecision(2) << static_cast<float>(i) << 'f' << std::endl;
        std::cout << "double:" << std::fixed << std::setprecision(2)  << static_cast<double>(i) << std::endl;
    }
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructed !" << std::endl;
}
