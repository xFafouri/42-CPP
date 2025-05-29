#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
    std::cout << "PmergeMe constructed !" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

bool PmergeMe::is_all_digits(std::string& str)
{
    for (unsigned long i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}
void PmergeMe::binary_search() 
{
    for (std::vector<int>::iterator it = lowest.begin(); it != lowest.end(); ++it) 
    {
        // Find the insertion point in 'largest' using binary search
        std::vector<int>::iterator pos = std::lower_bound(largest.begin(), largest.end(), *it);
        // Insert the element in the correct sorted position
        largest.insert(pos, *it);
    }
}

// void PmergeMe::binary_search()
// {
//     std::vector<int>::iterator itt = largest.begin();
//     for(unsigned long i = 0; i < largest.size() / 2; i++)
//     {
//         itt++;
//         // std::cout << *itt << std::endl;
//     }
//     // size_t i = 0;
//     // for (; i + 1 < largest.size() / 2; i += 2)
//     // {
//     //     itt++;
//     //     // largest.push_back(it->first);
//     //     // it++;
//     // }
//     if (lowest.begin() < itt && itt != lowest.end() && lowest.begin() < itt++)
//     {
//         for(unsigned long i = 0; i < largest.size() / 4; i++)
//         {
//             itt++;
//         // std::cout << *itt << std::endl;
//         }
//     }
// }

void PmergeMe::fill_vector()
{
    vector.push_back(token);
    struggle = token;
}
   
bool compare_pairs(std::pair<int, int> a,  std::pair<int, int> b) 
{
    return a.first < b.first;
}

void::PmergeMe::fill_largest()
{
    std::vector<std::pair<int, int> >::iterator it = pairs.begin();
    for (;it != pairs.end(); it++) 
    {
        largest.push_back(it->first);
    }
}

void::PmergeMe::fill_lowest()
{
    std::vector<std::pair<int, int> >::iterator it = pairs.begin();
    for (;it != pairs.end(); it++)
    {

        lowest.push_back(it->second);
        if (it == pairs.begin())
        {
            lowest.pop_back();
            largest.push_back(it->second);
        }
    }
}


void PmergeMe::fill_in_pair()
{
    // std::vector<std::pair<int, int> >::iterator it = pairs.begin();
    for (size_t i = 0; i + 1 < vector.size(); i += 2)
    {
        if (vector[i] > vector[i + 1])
            pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
        else
            pairs.push_back(std::make_pair(vector[i + 1], vector[i]));
        // largest.push_back(it->first);
        // it++;
    }
    std::sort(pairs.begin(), pairs.end(), compare_pairs);
    fill_lowest();
    fill_largest();
}

bool PmergeMe::check_arg(std::string arg)
{
    // std::cout << "arg" << arg <<std::endl;
    if (!is_all_digits(arg))
    {
        // std::cout << "**********" << std::endl;
        return false;
    }
    token = std::strtof(arg.c_str(), NULL);
    if (token < 0 || token > 2147483647)
        return false;
    std::cout << "token = *" << token << "*" << std::endl;
    return true;
}

void PmergeMe::display()
{
    std::vector<int>::iterator it = vector.begin();
    for(;it != vector.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}


PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe destructed !" << std::endl;
}

