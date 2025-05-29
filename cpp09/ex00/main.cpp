#include "Bitcoin.hpp"
#include <cctype>


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
        A.date = A.line.substr(0,A.line.find("|") - 1);
        A.test = A.line.substr(A.line.find("|") + 1, A.line.size());
        // A.value = std::strtof(A.test.c_str(), NULL);
        // std::cout << "Date = "<< A.date << " | ";
        // std::cout << "value = "<< A.value << std::endl;
        if (A.manage_error(A.date, A.test) != true)
        {
            continue;
        }
        A.searchInMap();
        // AddToContainer(date,value);
    }
    // A.display_map();
}
