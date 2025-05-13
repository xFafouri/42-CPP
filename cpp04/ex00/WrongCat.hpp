#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &t);
        WrongCat& operator=(const WrongCat& C);
        void makeSound() const;
        std::string getType() const;
        ~WrongCat();
};

#endif