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
        this->type = C.type;
    }
    return *this;

}

std::string Cat::getType() const
{
    return(type);
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructed !!" << std::endl;
}

