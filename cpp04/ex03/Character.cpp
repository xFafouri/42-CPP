#include "Character.hpp"

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
    if(floor.liste_check(m))
    {
        for(int i=0; i<4 ;i++)
        {
            if(this->inventory[i]==NULL)
            {
                this->inventory[i] = m;
                floor.liste_remove(m);
                break;
            }
        }
    }
}

void	Character::unequip(int index)
{
    if(index>=0 && index<4)
    {
        floor.liste_add(floor.liste_New(this->inventory[index]));
        this->inventory[index] = NULL;
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
    for(int i=0; i<4; i++)
    {
        if(this->inventory[i]!=NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
    }    
}
