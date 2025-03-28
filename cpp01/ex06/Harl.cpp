#include "Harl.hpp"
#include <string>

void Harl::debug(void)
{
    std::cout << "[Debug]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}
void Harl::info(void)
{
    std::cout << "[Info]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;

}

void Harl::warning(void)
{
    std::cout << "[Warning]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free ." << std:: endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;

}

void Harl::error(void)
{
    std::cout << "[Error]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;

}

void Harl::complain(std::string level)
{
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int array = -1;

    for(int i = 0; i < 4 ; i++)
    {
        if (level == arr[i])
        {
            array = i;
            break ;
        }
    }

    switch (array) 
    {
        case (0):
            Harl::debug();
        case (1):
            Harl::info();
        case (2):
            Harl::warning();
        case (3):
            Harl::error();
            break;
        default:
            std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;

    }
}