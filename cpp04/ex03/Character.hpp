#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        std::string name;
        int			total;
        AMateria	*inventory[4];
        AMateria* dropped[100];
        int droppedCount;
    public:
        Character();
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        std::string const & getName() const;
        Character(std::string const & name);
        virtual void		equip(AMateria *m);
		virtual void		unequip(int index);
		virtual void		use(int idx, ICharacter &target);

        virtual ~Character();
};

#endif 
