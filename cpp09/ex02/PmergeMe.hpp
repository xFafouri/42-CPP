#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>
class PmergeMe
{
    public:
        std::vector<int> vector;
        std::vector<std::pair<int, int> > pairs;
        std::vector<int> largest;
        std::vector<int> lowest;

        int token;
        int struggle;
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        bool is_all_digits(std::string& str);
        bool check_arg(std::string arg);
        void fill_vector();
        void  display();
        void fill_in_pair();
        void fill_largest();
        void fill_lowest();
        void binary_search();
        PmergeMe &operator=(const PmergeMe &obj);
        ~PmergeMe();
};

#endif 
