#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        std::string name;
    public:
        Character();
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        std::string const & getName() const override;
        Character(std::string const & name);
        // equipe unequipe use
        virtual ~Character();
};

#endif 
