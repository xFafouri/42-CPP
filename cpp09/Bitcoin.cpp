#include "Bitcoin.hpp"
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
