#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include "gb.hpp"
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
        void* operator new(size_t size);
        ~Ice();
};

#endif 
