#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <iterator>
#include <stdint.h>

// class Data;

class Data
{
    public :
        Data(){};
        std::string str;
        uintptr_t integer;
        ~Data(){};

};

class Serializer
{
    private:
        Serializer();
        ~Serializer();
    public:
        // Serializer(const Serializer &obj);
        // Serializer &operator=(const Serializer &obj);
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};

#endif 
