#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructed !!" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &t) : WrongAnimal(t)
{
    *this = t;
}

WrongCat& WrongCat::operator=(const WrongCat& C)
{
    if (this != &C)
    {
        this->type = C.type;
    }
    return *this;

}

std::string WrongCat::getType() const
{
    return(type);
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructed !!" << std::endl;
}