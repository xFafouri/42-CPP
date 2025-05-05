
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int	main() 
{
	Animal	*A = new Dog();
	Animal	*B = new Cat();
	int		i = 0;

	A->makeSound();
	B->makeSound();
    // Dog basicDog;
    // {
    //     Dog tmp = basicDog;
    // } 
	for (i = 0; i < 10; i++)
        delete array[i];
	return 0;
}