#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &t);
        Dog& operator=(const Dog& C);
        void makeSound();
        std::string getType() const;
        ~Dog();
};

#endif