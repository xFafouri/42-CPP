#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &t);
        Dog& operator=(const Dog& C);
        void makeSound();
        std::string getType();
        ~Dog();
};

#endif