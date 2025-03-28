#include "Harl.hpp"
#include <string>

void Harl::debug(void)
{
    std::cout << "[Debug]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "[Info]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[Warning]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free ." << std:: endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error(void)
{
    std::cout << "[Error]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string level)
{
   void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for(int i = 0; i < 4 ; i++)
    {
        if (level == arr[i])
            (this->*ptr[i])();
    }
}