#include <iostream>
#include <map>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdlib>

bool is_alpha(std::string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if (!std::isalpha(str[i]))
            return false;
    }
    return true;
}

bool parsing_input(std::string str, float value) 
{
    std::stringstream ss(str);
    std::string part1;
    std::string part2;
    std::string part3;
    if (std::getline(ss, part1, '-') && std::getline(ss, part2, '-')
            && getline(ss,part3)) 
    {
        if (part1.empty() || part1.length() != 4 || is_alpha(part1))
        {
            return false;
        }
        int yy = std::strtof(part2.c_str(), NULL);
        if (yy < 1 || yy > 12)
            return false;
        if (part2.empty() || part2.length() != 2 && !is_alpha(part2))
        {
            std::cout << "*********" << std::endl;
            return false;
        }
        int mm = std::strtof(part2.c_str(), NULL);
        if (mm < 1 || mm > 12)
            return false;
        if (part3.empty() || part3.length() != 2 && !is_alpha(part3))
        {
            return false;
        }
        int dd = std::strtof(part3.c_str(), NULL);
        if (dd < 0 || dd > 31)
            return false;
        if (value < 1 || value > 1000)
            return false;
        std::cout << part1 << std::endl;
        std::cout << part2 << std::endl;
        std::cout << part3 << std::endl;
        return true ;
    }
    return false;
}

int main()
{
    std::string date = "2024-12-30";
    float value = 10000;
    if (!parsing_input( date,value))
    {
        std::cout << "false " << std::endl;
    }
}