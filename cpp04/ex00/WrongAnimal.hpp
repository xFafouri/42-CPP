#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &t);
        WrongAnimal& operator=(const WrongAnimal& C);
        std::string getType() const;
        void makeSound() const;
        ~WrongAnimal();

};

#endif