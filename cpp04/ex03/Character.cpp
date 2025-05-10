#include "Character.hpp"
#include <cstddef>

Character::Character()
{

}

Character::Character(std::string const & name) : name(name), total(0) 
{

    int i = 0; 
    while (i < 4) 
    {
		this->inventory[i] = NULL;
        i++;
	}
}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        this->total = obj.total;
		this->name = obj.name;
		for(int i = 0; i < 4 ; i++)
			this->inventory[i] = obj.inventory[i];
    }
    return *this;
}

void	Character::equip(AMateria *m) 
{
	if (this->total == 4)
    {
		std::cout << "Full inventory" << std::endl; 
        return;
	}
	for (int i = 0; i < 4; i++)
     {
		if (this->inventory[i] == NULL) 
        {
            this->inventory[i] = m;
            if (m != NULL)
                std::cout << this->name << "equip AMateria " << m->getType() << " at index : " << i << std::endl; 
            break;
		}
	}
	this->total++;
}

void	Character::unequip(int index)
{
    if (this->total == 0)
    {
        std::cout << "the inventory is empty" << std::endl;
    }
	for (int i = 0; i < 4; i++)
     {
		if (this->inventory[i] == this->inventory[index]) 
        {
            this->inventory[i] =  NULL;
            this->total--;
            break;
		}
	}
}



void Character::use(int index, ICharacter& target)
{
    if (index >= 0 && index < 4 && inventory[index])
    {
        inventory[index]->use(target);
    }
    else {
        std::cout << "can't use it !" << std::endl;
    }
}

std::string const& Character::getName() const
{
    return name;
}
Character::~Character() 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (inventory[i])
            delete inventory[i];
    }
}
