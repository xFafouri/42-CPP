#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer destructed !" << std::endl;
}

Serializer::Serializer(const Serializer &obj)
{
    *this = obj;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
    (void)obj;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    
    uintptr_t converted = reinterpret_cast<uintptr_t>(ptr);
    return converted; 
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *converted = reinterpret_cast<Data*>(raw);
    return converted;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructed !" << std::endl;
}
