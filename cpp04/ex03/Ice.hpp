#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
class AMateria;
class ICharacter;

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &obj);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target); 
        Ice &operator=(const Ice &obj);
        ~Ice();
};

#endif 
