#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer destructed !" << std::endl;
}

// Serializer::Serializer(const Serializer &obj)
// {
//     *this = obj
// }

// Serializer &Serializer::operator=(const Serializer &obj)
// {
//     if (this != &obj)
//     {
        
//     }
//     return *this;
// }

uintptr_t Serializer::serialize(Data* ptr)
{
    
    uintptr_t converted = reinterpret_cast<uintptr_t>(ptr);
    // std::cout << "uintptr_t : " << converted << std::endl;
    return converted; 
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *converted = reinterpret_cast<Data*>(raw);
    // std::cout << "pointer to Data" << converted << std::endl;
    return converted;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructed !" << std::endl;
}
