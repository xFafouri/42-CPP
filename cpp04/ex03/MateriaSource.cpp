#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : index(0)
{
    std::cout << "MateriaSource constructed!" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
        this->index = obj.index;
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
            {
                delete this->materias[i];
                this->materias[i] = NULL;
            }
            if (obj.materias[i])
                this->materias[i] = obj.materias[i]->clone();
            else
                this->materias[i] = NULL;
        }
    }
    return *this;
}


void MateriaSource::learnMateria(AMateria* m)  
{
    if (index < 4 && m) 
    {
        materias[index] = m->clone();
        delete m;
        index++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{

    for (int i = 0; i < this->index; i++)
    {
        if (this->materias[i]->getType() == type)
        {
            return this->materias[i]->clone();
        }   
    }
    return NULL;
}


MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructed!" << std::endl;
    for (int i = 0; i < index; i++)
    {
        delete this->materias[i];
    }
}
