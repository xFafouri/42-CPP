#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructed !!" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal const &t)
{
    *this = t;
}


Animal& Animal::operator=(const Animal& C)
{
    if (this != &C)
    {
        this->type = C.type;
    }
    return *this;

}

void Animal::makeSound() const
{
    std::cout << "Animal Sound !!" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}

Animal::~Animal()
{
    std::cout << "Animal destructed !!" << std::endl;
}
