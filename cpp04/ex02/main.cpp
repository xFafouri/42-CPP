#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int	main() 
{
	Animal	*A = new Dog();
	Animal	*B = new Cat();

	A->makeSound();
	B->makeSound();
	delete A;
	delete B;
	return 0;
}