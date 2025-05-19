
#include "Serializer.hpp"  


int main() 
{

    Data data;
    data.integer = 123;

    Data* originalPtr = &data;
    std::cout <<" originalPtr = " << originalPtr << std::endl;

    uintptr_t raw = Serializer::serialize(originalPtr);
    std::cout << "uintptr_t raw = " << raw << std::endl;


    Data* ptr = Serializer::deserialize(raw);
    std::cout << " Data* ptr = " << ptr << std::endl;



    if (ptr == originalPtr) 
    {
        std::cout << "Success!" << std::endl;
    }
    else {
        std::cout << "not match!" << std::endl;
    }
    std::cout << "integer: " << ptr->integer << std::endl;

    return 0;
}
