#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <stdexcept>


template <typename T>
class Array
{   
    public:
        T* arr;
        unsigned int n;
        Array()
        {
            std::cout << "constructed !" << std::endl;
            arr = NULL;
            n = 0;
        };
        Array(unsigned int size) : n(size)
        {
            arr = new T[n]();
        };
        Array(const Array &obj) : n(obj.n)
        {
            arr = new T[n]();
            for (size_t i = 0; i < n; i++)
            {
                arr[i] = obj.arr[i];
            }
        }
        Array &operator=(const Array &obj)
        {
            if (this != &obj)
            {
                std::cout << "**" << std::endl;
                T* arr2 = new T[obj.n](); 
                for (size_t i = 0; i < obj.n; i++)
                {
                    arr2[i] = obj.arr[i]; 
                }
                delete[] arr;
                arr = arr2;
                n = obj.n;
            }
            return (*this);
        }
        T& operator[](unsigned int index)
        {
            if (index >= n)
                throw std::out_of_range("out of range");
            return arr[index];
        }
        const T& operator[](unsigned int index) const
        {
            if (index >= n)
                throw std::out_of_range("out of range");
            return arr[index];
        }
        unsigned int size() const
        {
            return n;
        }
        ~Array()
        {
            delete[] arr;
        }
};

#endif