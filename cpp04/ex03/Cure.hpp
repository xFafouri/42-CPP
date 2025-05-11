#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
#include "gb.hpp"
class AMateria;
class ICharacter;

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &obj);
        Cure &operator=(const Cure &obj);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target); 
        void* operator new(size_t size);
        ~Cure();
};

#endif 
