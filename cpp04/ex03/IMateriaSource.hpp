#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        IMateriaSource();
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        IMateriaSource(const IMateriaSource &obj);
        IMateriaSource &operator=(const IMateriaSource &obj);
};

#endif 
