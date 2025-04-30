#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructed !!" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &t) : Animal(t)
{
    *this = t;
}

Cat& Cat::operator=(const Cat& C)
{
    if (this != &C)
    {

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
}

