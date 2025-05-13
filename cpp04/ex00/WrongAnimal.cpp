#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructed !!" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &t)
{
    *this = t;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& C)
{
    if (this != &C)
    {
        this->type = C.type;
    }
    return *this;

}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound !!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructed !!" << std::endl;
}
