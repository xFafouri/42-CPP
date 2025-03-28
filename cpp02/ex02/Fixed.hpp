
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &obj);
        ~Fixed();

        Fixed &operator=(const Fixed &obj);
        bool operator>(const Fixed &obj) const ;
        bool operator<(const Fixed &obj) const ;
        bool operator>=(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;


        Fixed operator+(const Fixed &C) const;
        Fixed operator-(const Fixed &C) const;
        Fixed operator*(const Fixed &C) const;
        Fixed operator/(const Fixed &C) const;

        Fixed operator++(int);
        Fixed& operator++();

        Fixed operator--(int);
        Fixed& operator--();

        static Fixed& min(Fixed &a , Fixed &b); 
        static Fixed const& min(const Fixed &a ,const Fixed &b); 
        static Fixed& max(Fixed &a , Fixed &b); 
        static Fixed const& max(const Fixed &a ,const  Fixed &b);

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(const int raw);
        
};
    
std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif