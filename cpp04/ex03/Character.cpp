#include "Character.hpp"

Character::Character()
{
    std::cout << "Character constructed!" << std::endl;

}

Character::Character(std::string const & name) : name(name), total(0) , droppedCount(0)
{
    std::cout << "Character constructed!" << std::endl;
    int i = 0; 
    while (i < 4) 
    {
		this->inventory[i] = NULL;
        i++;
	}
    for (int j = 0; j < 100; j++)
        dropped[j] = NULL;
}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; i++) 
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (obj.inventory[i] != NULL)
                this->inventory[i] = obj.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
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
        return;
    }
	for (int i = 0; i < 4; i++)
     {
		if (this->inventory[i] == this->inventory[index]) 
        {
            if (droppedCount < 100)
                dropped[droppedCount++] = inventory[index];
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
    std::cout << "Character destructed!" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (inventory[i])
            delete inventory[i];
    }
    for (int i = 0; i < droppedCount; i++)
        delete dropped[i];
}
