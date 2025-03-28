#include "PhoneBook.hpp"

void PhoneBook::add_first_name(int index, std::string first_name)
{
    contact[index % 8].setfirstname(first_name);
}
void PhoneBook::add_last_name(int index, std::string last_name)
{
    contact[index % 8].setlastname(last_name);
}
void PhoneBook::add_nick_name(int index, std::string nickname)
{
    contact[index % 8].setnickname(nickname);
}
void PhoneBook::add_phone_number(int index, std::string phone_number)
{
    contact[index % 8].setphone_number(phone_number);
}
void PhoneBook::add_Darkestsecret(int index, std::string darkset_secret)
{
    contact[index % 8].setdarkset_secret(darkset_secret);
}
void PhoneBook::display_contacts(int size)
{
    int i = 0;
    if (size >= 8)
        size = 8;
    while (i < size)
    {
        contact[i].display_contact(i);
        i++;
    }
}
void PhoneBook::display_byindex(int index)
{
    contact[index].display_by_index();
}

int check_command(std::string command)
{
    if (command.empty())
        return (1);
    int i = 0;
    while (command[i])
    {
        if(!isprint(command[i]))
            return(1);
        i++;
    }
    return(0);
}
