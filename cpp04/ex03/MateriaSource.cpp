#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)  
{
    this->materias[this->index] = m;
	this->index++;
}

AMateria* MateriaSource::CreateMateria(std::string const & type) 
{
 for (int i = 0; i < this->index; i++)
    {
		if (this->materias[i]->getType() == type)
			return this->materias[i];
	}
    return 0;
}

MateriaSource::~MateriaSource()
{

}
