#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class AMateria;
class IMateriaSource;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[4];
        int index;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
        MateriaSource &operator=(const MateriaSource &obj);
        virtual ~MateriaSource();
};

#endif 
