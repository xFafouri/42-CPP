#include "Fixed.hpp"
#include <iomanip>

int main( void ) 
{
    Fixed a;
    Fixed k;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d(b);

    a = Fixed( 0.125011f );
    k = Fixed(0.0625011f);

    std::cout << std::setprecision(20);
    std::cout << "sum (fixed-point) = " << a.toFloat() + k.toFloat() << std::endl;
    std::cout << "*sum (floating-point) = " << 0.12501f + 0.062501f << std::endl;




    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return (0);
}