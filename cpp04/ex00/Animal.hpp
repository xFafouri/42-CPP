#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &t);
        Animal& operator=(const Animal& C);
        std::string getType();
        virtual void makeSound();
        ~Animal();

};

#endif