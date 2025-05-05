#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructed !!" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}


Cat::Cat(const Cat& C) : Animal(C) 
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*C.brain);
}

Cat& Cat::operator=(const Cat& C)
{
    if (this != &C)
    {
        this->type = C.type;
    }
    return *this;

}

std::string Cat::getType()
{
    return(type);
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructed !!" << std::endl;
    delete this->brain;
}

