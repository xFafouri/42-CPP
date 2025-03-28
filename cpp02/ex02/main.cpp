#include "Fixed.hpp"

int main( void )
 {
	Fixed  a( 10 );
	Fixed  b( 5.5f );
	Fixed  c( a );


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << "+ : " << (b + c) << std::endl;
	std::cout << "after b is " << b << std::endl;
	std::cout << "after c is " << c << std::endl;

	std::cout << "-: " << (b - c) << std::endl;

    std::cout << "after* b is " << b << std::endl;
	std::cout << "after* c is " << c << std::endl;

	
    std::cout << "after** b is " << b << std::endl;
	std::cout << "after** c is " << c << std::endl;

	if (c < b)
		std::cout << "c lower than b" << std::endl;
	else
		std::cout << "c greater than b" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "++: " << a << std::endl;
	
	return 0;
}