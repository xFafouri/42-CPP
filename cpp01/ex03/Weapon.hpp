#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        const std::string& gettype();
        void setType(std::string type);
};


#endif