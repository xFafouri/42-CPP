#include "Bitcoin.hpp"
#include <cctype>




// int parsing_input(std::string date, float value)
// {
//     int i = 0;
//     while(date[i])
//     {
//         for(;i < 4; i++)
//         {
//             if (std::isdigit(date[i]))
//                 return 1; 
//         }
//         if (date[i] != '-')
//             return 1;
//         for(;i < 2; i++)
//         {
//             if (std::isdigit(date[i]))
//                 return 1; 
//         }
//         if (date[i] != '-')
//             return 1;
//                 for(;i < 2; i++)
//         {
//             if (std::isdigit(date[i]))
//                 return 1; 
//         }
//     }
// }

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
        if (part1.length() != 4 || !is_alpha(part1))
        {
            return false;
        }
        if (part2.length() != 2 && !is_alpha(part2))
        {
            return false;
        }
        if (part3.length() != 2 && !is_alpha(part3))
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

int main(int ac, char **av)
{
    Bitcoin A;
    if (ac != 2)
    {
        std::cerr << "bad arguments" << std::endl;
        return 1;
    }

    A.fill_DataBase();
    std::string input = av[1];
    std::ifstream Myinput(input.c_str());
    if (!Myinput.is_open())
    {
        std::cerr << "Error , can't open file" << std::endl;
        return 0;
    }
    while(std::getline(Myinput, A.line))
    {
        A.date = A.line.substr(0,A.line.find(","));
        A.test = A.line.substr(A.line.find(",") + 1, A.line.size());
        A.value = std::strtof(A.test.c_str(), NULL);
        // std::setprecision(2);f
        if (!parsing_input(A.date, A.value))
        {
            std::cout << "sad" << std::endl;
        }
        // AddToContainer(date,value);
    }
    // A.display_map();
}
