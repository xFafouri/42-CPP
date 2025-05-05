#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>


class MateriaSource : IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        MateriaSource &operator=(const MateriaSource &obj);
        ~MateriaSource();
};

#endif 
