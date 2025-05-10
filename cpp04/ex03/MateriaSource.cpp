#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : index(0)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	this->index = obj.index;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = obj.materias[i];
	}
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)  
{
    if (index < 4 && m) 
    {
        materias[index] = m;
        // materias[index] = m->clone();
        index++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
 for (int i = 0; i < this->index; i++)
    {
		if (this->materias[i]->getType() == type)
        {
            // std::cout << this->materias[i]->getType() << std::endl;
			// return this->materias[i];
            return this->materias[i]->clone();
        }
	}
    return NULL;
}


MateriaSource::~MateriaSource()
{
    for (int i = 0; i < index; ++i)
    {
        delete this->materias[i];
    }
}
