#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    std::cout << "Dog constructed !!" << std::endl;
    this->type = "Dog";

}

Dog::Dog(const Dog &t) : Animal(t)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = t;
}

Dog& Dog::operator=(const Dog& C)
{
    if (this != &C)
    {
        this->type = C.type;
    }
    return *this;
}

std::string Dog::getType() const
{
    return(type);
}

void Dog::makeSound() const
{
    std::cout << "HAW HAW !" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Dog destructed !!" << std::endl;
}
