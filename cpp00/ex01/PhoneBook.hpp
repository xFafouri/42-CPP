#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void add_first_name(int index, std::string first_name);
        void add_last_name(int index, std::string last_name);
        void add_nick_name(int index, std::string nickname);
        void add_phone_number(int index, std::string phone_number);
        void add_Darkestsecret(int index, std::string darkset_secret);
        void display_contacts(int size);
        void display_byindex(int index);
};

int check_command(std::string command);

#endif
