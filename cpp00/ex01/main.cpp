
#include "PhoneBook.hpp"


int main()
{
    std::string command;
    PhoneBook phonebook; 
    std::string  first_name;
    int i = 0;

    
    while (1)
    {
        if(!std::getline (std::cin,command))
            break;
        if (command == "ADD")
        {
            std::cout << "first name : ";
            std::getline(std::cin >> std::ws, command);
            if (check_command(command))
                continue ;
            phonebook.add_first_name(i, command);
            //last name;
            std::cout << "last name : ";
            std::getline(std::cin >> std::ws, command);
            if (check_command(command))
                continue ;
            phonebook.add_last_name(i, command);
            //set nickname
            std::cout << "Nickname : ";
            std::getline(std::cin >> std::ws , command);
            if (check_command(command))
                continue ;
            phonebook.add_nick_name(i, command);
            //phone number;
            std::cout << "Phone number : ";
            std::getline(std::cin >> std::ws, command);
            if (check_command(command))
                continue ;
            phonebook.add_phone_number(i, command);
            //darkest secret;
            std::cout << "Darkest secret : ";
            std::getline(std::cin >> std::ws , command);
            if (check_command(command))
                continue ;
            phonebook.add_Darkestsecret(i, command);
            i++;
        }
        if (command == "SEARCH")
        {
            std::cout << std::setw(10) << "Index" << "|";
            std::cout << std::setw(10) << "First name" << "|"; 
            std::cout << std::setw(10) << "Last name" << "|";
            std::cout << std::setw(10) << "Nick name" << "|" << std::endl;
            phonebook.display_contacts(i);
            std::cout << "Index = ";
            std::getline(std::cin , command);
            int index = std::atoi(command.c_str());
            if(index == 0 && command != "0")
            {
                std::cout<< "Wrong Index !" <<std::endl;
                continue;
            }
            if (index < 0 || index >= i)
            {
                std::cin.clear();
                std::cout << "Index out of range !" << std::endl;
                continue ;
            }
            phonebook.display_byindex(index);
        }
        if (command == "EXIT")
            break ;
    }
}