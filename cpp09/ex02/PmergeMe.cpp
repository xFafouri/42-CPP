#include "PmergeMe.hpp"
#include <vector>


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

// void PmergeMe::binary_search() 
// {
//     for (std::vector<int>::iterator it = lowest.begin(); it != lowest.end(); ++it) 
//     {
//         // Find the insertion point in 'largest' using binary search
//         std::vector<int>::iterator pos = std::lower_bound(largest.begin(), largest.end(), *it);
//         // Insert the element in the correct sorted position
//         largest.insert(pos, *it);
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

void PmergeMe::fill_lowest()
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

// void PmergeMe::fill_jacob_sequence() 
// {
//     int j0 = 0;
//     int j1 = 1;

//     jacob_sequence.push_back(j1);
//     while (1)
//     {
//         unsigned long next = j1 + 2 * j0;
//         if (next >= largest.size())
//             break;
//         jacob_sequence.push_back(next);
//         j0 = j1;
//         j1 = next;
//     }
// }

int PmergeMe::getJacobsthal(int n)
{
    if (n == 0) 
        return 0;
    if (n == 1)
        return 1;

    int j0 = 0;
    int j1 = 1;
    int jn;
    for (int i = 2; i <= n; i++) 
    {
        jn = j1 + 2 * j0;
        j0 = j1;
        j1 = jn;
    }
    return j1;
}

void PmergeMe::initialize_flag_vec()
{
    flag_vec.resize(largest.size());
    for (size_t i = 0; i < largest.size(); ++i)
    {
        flag_vec[i].first = largest[i];
        flag_vec[i].second = false;
    }
}

void PmergeMe::binary_insert(int pend)
{
    int low = 0;
    int high = lowest.size();
    while(low < high)
    {
        int mid = (low + high) / 2;
        if (pend < lowest[mid])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    // now low == high
    std::cout << "position : " << *lowest.begin() + low << std::endl;
    lowest.insert(lowest.begin() + low, pend);
}


void PmergeMe::insert_by_index()
{
    int jac_index = 1;
    std::cout << "**** insert***" << std::endl;
    while (1) 
    {
        unsigned long j = getJacobsthal(jac_index);
        std::cout << "jacobsthal number " << j << std::endl;
        if (j >= largest.size())
            break;
        if (!flag_vec[j].second) 
        {
            std::cout << flag_vec[j].first << " => send it to binary insert" << std::endl;
            // Binary insert flag_vec[j].second into sorted chain
            binary_insert(flag_vec[j].first);
            flag_vec[j].second = true;
        }
        jac_index++;
    }
    for (int i = flag_vec.size() - 1; i >= 0; i--) 
    {
        if (!flag_vec[i].second) 
        {
            binary_insert(flag_vec[i].first);
            flag_vec[i].second = true;
        }
    }
}


//     for (int i = pendFlags.size() - 1; i >= 0; --i) {
//     if (!pendFlags[i].second) {
//         // Binary insert pend[i] into sorted chain
//         pendFlags[i].second = true; // mark as inserted
//     }
// }


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

