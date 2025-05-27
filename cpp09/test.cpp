#include <iostream>
#include <map>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>

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
        std::cout << part1 << std::endl;
        std::cout << part2 << std::endl;
        std::cout << part3 << std::endl;
        if (part1.empty() || part1.length() != 4 || is_alpha(part1))
        {
            return false;
        }
        if (part2.empty() || part2.length() != 2 && !is_alpha(part2))
        {
            std::cout << "*********" << std::endl;
            return false;
        }
        if (part3.empty() || part3.length() != 2 && !is_alpha(part3))
        {
            return false;
        }
    }
    else 
    {
        return false;
    }
    return true;
}

int main()
{
    std::string date = "2024-15-02";
    float value = 15;
    if (parsing_input( date,15) == false)
    {
        std::cout << "false " << std::endl;
    }
}