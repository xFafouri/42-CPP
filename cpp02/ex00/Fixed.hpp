#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    private:
        int value;
        static const int fract_bits = 8;
    public:
        Fixed();
        Fixed(Fixed const &t);
        Fixed& operator=(const Fixed& C);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(const int raw);
};

#endif