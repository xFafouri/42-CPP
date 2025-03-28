#include "Contact.hpp"

void Contact::setfirstname(std::string first_name)
{
    this->first_name = first_name;
}
void Contact::setlastname(std::string last_name)
{
    this->last_name = last_name;
}
void Contact::setphone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}    
void Contact::setnickname(std::string nickname)
{
    this->nickname = nickname;
}
void Contact::setdarkset_secret(std::string darkset_secret)
{
    this->darkset_secret = darkset_secret;
}

void Contact::display_by_index()
{
    std::cout << "first name :" << first_name << std::endl;
    std::cout << "Last name :" << last_name << std::endl;
    std::cout << "Nick name :" << nickname << std::endl;
    std::cout << "Phone number :" << phone_number << std::endl;
    std::cout << "Darkset_secret :" << darkset_secret << std::endl;
}

void Contact::display_contact(int index)
{
    std::cout << std::setw(10) << index << "|";
    if (first_name.length() > 9)
        first_name = first_name.substr(0, 9) + ".";
    std::cout << std::setw(10) << first_name << "|";
    if (last_name.length() > 9)
        last_name = last_name.substr(0, 9) + ".";
    std::cout << std::setw(10) << last_name << "|";
    if (nickname.length() > 9)
        nickname = nickname.substr(0, 9) + ".";
    std::cout << std::setw(10) << nickname << "|"<< std::endl;
}


