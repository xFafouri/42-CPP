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
        value = C.value;
    }
    return(*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = (value << Fixed::fract_bits);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(value * (1 << Fixed::fract_bits));
}

int Fixed::toInt(void) const
{
    return(this->value >> fract_bits);
}

float Fixed::toFloat(void) const
{
    return((float)this->value / (1  << fract_bits));
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
