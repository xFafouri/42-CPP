#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// Note that you can derive an abstract class from a nonabstract class, 
//and you can override a non-pure virtual function with a pure virtual function
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
        virtual void makeSound() const = 0;
        virtual ~Animal();
};

#endif