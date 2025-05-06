#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter 
{
    public:
        virtual     std::string const & getName() const = 0;
        virtual void		equip(AMateria *m) = 0;
		virtual void		unequip(int index) = 0;
		virtual void		use(int idx, ICharacter &target) = 0;
        virtual ~ICharacter();
};

#endif 
