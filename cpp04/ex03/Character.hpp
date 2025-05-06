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
    public:
        Character();
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        std::string const & getName() const;
        Character(std::string const & name);

        // equipe unequipe use
        virtual void		equip(AMateria *m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter &target);

        virtual ~Character();
};

#endif 
