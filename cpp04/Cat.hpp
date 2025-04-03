#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &t);
        Cat& operator=(const Cat& C);
        void makeSound();
        std::string getType();
        ~Cat();
};

#endif