#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>


class MateriaSource : IMateriaSource
{
    private:
        AMateria* materias[4];
        int index;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        void learnMateria(AMateria* m) override;
        AMateria* CreateMateria(std::string const & type);
        MateriaSource &operator=(const MateriaSource &obj);
        ~MateriaSource();
};

#endif 
