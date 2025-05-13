#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() 
{
    std::cout << "Dog constructed !!" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog& C) : Animal(C) 
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*C.brain);
}

Dog& Dog::operator=(const Dog& C)
{
    if (this != &C)
    {
        this->type = C.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*C.brain);
    }
    return *this;
}
std::string Dog::getType() const
{
    return(type);
}

void Dog::makeSound()
{
    std::cout << "HAW HAW !" << std::endl;
}


Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructed !!" << std::endl;
}
