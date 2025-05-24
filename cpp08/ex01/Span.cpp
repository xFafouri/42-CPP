#include "Span.hpp"
#include <stdexcept>
#include <vector>


Span::Span(unsigned int size)
{
    std::cout << "Span costructed !" << std::endl;
    max_size = size;
    nb_stored = 0;
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        this->max_size = obj.max_size;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (max_size > nb_stored)
    {
        arr.push_back(number);
        std::cout << number << " is added" << std::endl;
        nb_stored++;
    }
    else
    {
        std::cout << "arr is full " << number << " not added" << std::endl;
    }
}

int Span::shortestSpan()
{   
    int diff = INT_MAX;
    int tmp = 0;
    std::sort(arr.begin(),arr.end());

    for (unsigned int i = 1; i < arr.size(); i++)
    {
        tmp = arr[i] - arr[i - 1];
        if (tmp < diff)
            diff = tmp;
    }
    return diff;
}

void Span::fill_arr(int *list, unsigned int size)
{

    
    for(unsigned int i = 0;i < size;i++)
    {
        if (i < max_size)
        {
            addNumber(list[i]);
        }
    }
}

void Span::display_arr()
{
    for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

int Span::longestSpan()
{
    int max = *std::max_element(arr.begin(), arr.end());
    int min =  *std::min_element(arr.begin(), arr.end());
    return max - min;
}

Span::~Span()
{
    std::cout << "Span destructed !" << std::endl;
}
