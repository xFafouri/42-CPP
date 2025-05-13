
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "=== Testing proper Animal ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of i: " << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound(); 

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Testing wrong Animal ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;
    return 0;
}
