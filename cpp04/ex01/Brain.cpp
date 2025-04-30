#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed !" << std::endl;
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = "brain process";
    }
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdea(int index, const std::string& idea) 
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return("no idea");
}
Brain::~Brain()
{
    std::cout << "Brain destructed !" << std::endl;
}
