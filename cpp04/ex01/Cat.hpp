#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const &t);
        Cat& operator=(const Cat& C);
        void makeSound();
        std::string getType() const;
        ~Cat();
};

#endif