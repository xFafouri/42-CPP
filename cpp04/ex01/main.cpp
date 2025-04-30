
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int	main() 
{
	Animal	*array[100];
	int		i = 0;

	while (i < 5)
		array[i++] = new Dog();
	while (i < 10)
		array[i++] = new Cat();

	array[2]->makeSound();
	array[6]->makeSound();
    // Dog basicDog;
    // {
    //     Dog tmp = basicDog;
    // } 
	for (i = 0; i < 10; i++)
        delete array[i];
	return 0;
}