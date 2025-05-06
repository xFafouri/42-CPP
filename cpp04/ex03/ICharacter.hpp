#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class ICharacter 
{
    public:
        ICharacter();
        ICharacter(const ICharacter &obj);
        virtual std::string const & getName() const = 0;
        ICharacter &operator=(const ICharacter &obj);
        virtual ~ICharacter() {};
};

#endif 
