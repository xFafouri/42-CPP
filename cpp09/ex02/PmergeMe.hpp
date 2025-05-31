#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cctype>
#include <cstdlib>
#include <algorithm>


class PmergeMe
{
    public:
        //vector
        std::vector<int> vector;
        std::vector<std::pair<int, int> > pairs;
        std::vector<int> pend;
        std::vector<int> main_chain;
        std::vector<std::pair<int, bool> > flag_vec;
        //deque
        std::deque<int> deque;
        std::deque<std::pair<int, int> > d_pairs;
        std::deque<int> d_pend;
        std::deque<int> d_main_chain;
        std::deque<std::pair<int, bool> > d_flag_vec;
    
        int token;
        int struggle;
        bool is_struggle;
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        bool is_all_digits(std::string& str);
        bool check_arg(std::string arg);
        void fill_vector();
        void  display();
        void fill_in_pair();
        void fill_largest();
        void fill_lowest();
        // void fill_jacob_sequence();
        void initialize_flag_vec();
        void binary_insert(int main_chain);
        void insert_by_index();
        int getJacobsthal(int n);
        void binary_search();
        void generateJacobsthal();
        PmergeMe &operator=(const PmergeMe &obj);
        ~PmergeMe();
};

#endif 
