
#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"



int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    // std::cout << &src << std::endl;

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    // me->use(1, *bob);
    me->unequip(0);
    // me->unequip(0);
    // me->unequip(2);
    // me->use(0, *bob);
    // me->use(2, *bob);
    // me->unequip(2);
    delete bob;
    delete me;
    delete src;
    return 0;
}