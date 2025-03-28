#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = t;
}

Fixed& Fixed::operator=(const Fixed& C)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &C)
    {
        this->setRawBits(C.getRawBits());
    }
    return(*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}
void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}
