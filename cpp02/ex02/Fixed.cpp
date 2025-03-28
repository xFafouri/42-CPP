#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &t)
{
    *this = t;
}

Fixed &Fixed::operator=(const Fixed& C)
{
    if (this != &C)
    {
        value = C.value;
    }
    return(*this);
}

Fixed Fixed::operator+(const Fixed& C) const
{
    return(Fixed(this->toFloat() + C.toFloat()));
}

Fixed Fixed::operator-(const Fixed& C) const
{
    return(Fixed(this->toFloat() - C.toFloat()));
}

Fixed Fixed::operator*(const Fixed& C) const
{
    return(Fixed(this->toFloat() * C.toFloat()));
}

Fixed Fixed::operator/(const Fixed& C) const
{
    return(Fixed(this->toFloat() / C.toFloat()));
}


bool Fixed::operator>(const Fixed &obj) const
{
    if (this->value > obj.value)
    {
        return(true);
    }
    return(false);
}

bool Fixed::operator<(const Fixed &obj) const
{
    if (this->value < obj.getRawBits())
    {
        return(true);
    }
    return(false);
}

bool Fixed::operator>=(const Fixed &obj) const
{
    if (this->value >= obj.getRawBits())
    {
        return(true);
    }
    return(false);
}

bool Fixed::operator<=(const Fixed &obj) const
{
    if (this->value <= obj.getRawBits())
    {
        return(true);
    }
    return(false);
}

bool Fixed::operator!=(const Fixed &obj) const
{
    if (this->value != obj.getRawBits())
    {
        return(true);
    }
    return(false);
}

bool Fixed::operator==(const Fixed &obj) const
{
    if (this->value == obj.value)
    {
        return(true);
    }
    return(false);
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

Fixed::Fixed(const int value)
{
    this->value = (value << Fixed::fract_bits);
}

Fixed::Fixed(const float value)
{
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

Fixed& Fixed::operator++()
{
    this->value++;
    return(*this);
}


Fixed Fixed::operator++(int)
{
    Fixed  tmp(*this);
    operator++();
    return (tmp);
}

Fixed& Fixed::operator--()
{
    this->value--;
    return(*this);
}


Fixed Fixed::operator--(int)
{
    Fixed  tmp(*this);
    operator--();
    return (tmp);
}


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return(b);
    else
        return(a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return(a);
    else
        return(b);
}

//const min max

Fixed const& Fixed::min(const Fixed &a,const  Fixed &b)
{
    if (a > b)
        return(b);
    else
        return(a);
}

Fixed const& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return(a);
    else
        return(b);
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}
void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}
