#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <limits>
#include <climits>
#include <iostream>
#include <algorithm>
#include <iterator>

class Span
{
    private:
        std::vector<int> arr;
        unsigned int max_size;
        unsigned int nb_stored;
    public:
        Span(unsigned int size);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void display_arr();
        void fill_arr(int *arr, unsigned int size);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
};

#endif 
