#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class ICharacter 
{
    public:
        ICharacter();
        ICharacter(const ICharacter &obj);
        ICharacter &operator=(const ICharacter &obj);
        ~ICharacter();
};

#endif 
