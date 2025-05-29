#include "Bitcoin.hpp"
#include <cctype>
#include <utility>
#include <vector>

Bitcoin::Bitcoin()
{
    std::cout << "Bitcoin destructed !" << std::endl;
}

Bitcoin::Bitcoin(const Bitcoin &obj)
{
    *this = obj;
}

void Bitcoin::display_map()
{
    std::map<std::string, float>::iterator it;
    std::map<std::string, float>::iterator end = map.end();
    end--;
    for (it = map.begin(); it != end; it++)
    {
        std::cout << it->first << " | ";
        std::cout << it->second << std::endl;
    }
}

void Bitcoin::fill_DataBase()
{
    std::string file = "data.csv";

    std::ifstream Myfile(file.c_str());
    if (!Myfile.is_open())
    {
        std::cerr << "Error , can't open file" << std::endl;
        return ;
    }
    std::cout << "date | value " << std::endl; 
    while (std::getline(Myfile, line))
    {
        date = line.substr(0,line.find(","));
        test = line.substr(line.find(",") + 1,line.size());
        value = std::strtof(test.c_str(), NULL);
        // std::setprecision(2);f

        AddToContainer(date,value);
        // std::cout << "Date = " << A.date << " | ";
        // std::cout << "Value = " << A.value << std::endl;
    }
}

void Bitcoin::AddToContainer(std::string date, float value)
{
    this->map.insert(std::pair<std::string,  float>(date,value));
}


// bool is_digit(std::string str)
// {
//     for(unsigned long i = 0; i < str.length(); i++)
//     {
//         if (!std::isdigit(str[i]))
//             return false;
//     }
//     return true;
// }
bool is_all_digits(const std::string& str)
{
    if (str.empty())
            return false;
    for (unsigned long i = 0; i < str.length(); ++i)
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '.')
            i++;
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

int Bitcoin::parsing_input(std::string str, std::string number)
{
    std::stringstream ss(str);
    std::string part1;
    std::string part2;
    std::string part3;
    if (std::getline(ss, part1, '-') && std::getline(ss, part2, '-')
            && getline(ss,part3)) 
    {
        if (part1.empty() || part1.length() != 4 || !is_all_digits(part1))
            return 2;
        yy = std::strtof(part1.c_str(), NULL);
        // std::cout << "yy = "<< yy << std::endl;
        if (yy < 2009 || yy > 2022)
            return -1;
        if (part2.empty() || part2.length() != 2 || !is_all_digits(part2))
        {
            std::cout << 3 << std::endl;
            return 3;
        }
        mm = std::strtof(part2.c_str(), NULL);
        if (mm < 1 || mm > 12)
            return 4;
        if (part3.length() != 2 || !is_all_digits(part3))
            return 5;
        dd = std::strtof(part3.c_str(), NULL);
        if (dd < 0 || dd > 31)
            return 6;
        // std::cout << "Number = *" << number  << "*"<< std::endl;
        if (!is_all_digits(number))   
            return 7;
        value = std::strtof(number.c_str(), NULL);
        // std::cout << "value = " << value << std::endl;
        if (value < 1 || value > 1000)
            return 7;
        // std::cout << part1 << std::endl;
        // std::cout << part2 << std::endl;
        return true ;
    }
    return false;
}

bool Bitcoin::manage_error(std::string str, std::string number)
{
    int valid = parsing_input(str, number);
    // std::cout << "Valid = " << valid << std::endl;
    if (valid == -1)
    {
        std::cerr << "Error : out of my data base!" << std::endl;
        return false ;
    }
    if (valid == 2)
    {
        std::cerr << "Error: invalid Format YYYY" << std::endl;
        return false;
    }
    else if (valid == 4)
    {
        std::cerr << "Error: invalid mounth" << std::endl;
        return false;
    }
    else if (valid == 3)
    {
        std::cerr << "Error: invalid Format MM" << std::endl;
        return false;
    }
    else if (valid == 5)
    {
        std::cerr << "Error: invalid Format DD" << std::endl;
        return false;
    }
    else if (valid == 6)
    {
        std::cerr << "Error: invalid Day" << std::endl;
        return false;
    }
    else if (valid == 7)
    {
        std::cerr << "Error: invalid value" << std::endl;
        return false;
    }
    else if (valid == false)
        return false;
    return true;
}

void Bitcoin::searchInMap()
{
    //std::map<std::string, float>::iterator it;
    //std::map<std::string, float>::iterator end = map.end();
    //std::map<std::string, float>::iterator dates = map.upper_bound(date);
    std::map<std::string, float>::iterator it = map.upper_bound(date);

    if (map.find(date) != map.end())
    {
        // float rate = map[date];
        std::cout << date << " => " << value << " = " << value * it->second << std::endl;
        return;
    }
    --it;
    std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}


// void Bitcoin::searchInMap()
// {
//     std::map<std::string, float>::iterator it;
//     std::map<std::string, float>::iterator end = map.end();
//     // std::map<std::string, float>::iterator dates = map.upper_bound(date);
//     end--;
//     for (it = map.begin(); it != end; it++)
//     {
//         // std::cout << it->first << std::endl;
//         // dates++;
//         if (date <= it->first)
//         {
//             std::cout << "Date : " <<  date << " => " << value << " = " << value * it->second << std::endl;
//         }
//         else 
//         {
//             it--;
//             // dates--;
//             std::cout << "Date : " <<  it->first << " => " << value << " = " << value * it->second << std::endl;
//         }
//     }
// }
Bitcoin &Bitcoin::operator=(const Bitcoin &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

Bitcoin::~Bitcoin()
{
    std::cout << "Bitcoin destructed !" << std::endl;
}
