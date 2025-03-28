#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>


class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string phone_number;
        std::string nickname;
        std::string darkset_secret;
    public:
        void setfirstname(std::string first_name);
        void setlastname(std::string last_name);
        void setphone_number(std::string phone_number);
        void setnickname(std::string nickname);
        void setdarkset_secret(std::string darkset_secret);
        void    display_contact(int index);
        void    display_by_index();
    
};

#endif