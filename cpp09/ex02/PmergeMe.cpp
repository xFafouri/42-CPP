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
        pend.push_back(it->second);
    }
}

void PmergeMe::fill_lowest()
{
    std::vector<std::pair<int, int> >::iterator it = pairs.begin();
    for (;it != pairs.end(); it++)
    {

        main_chain.push_back(it->first);
        if (it == pairs.begin())
        {
            main_chain.pop_back();
            pend.push_back(it->first);
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
//         if (next >= pend.size())
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
    flag_vec.resize(pend.size());
    for (size_t i = 0; i < pend.size(); ++i)
    {
        flag_vec[i].first = pend[i];
        flag_vec[i].second = false;
    }
}

void PmergeMe::binary_insert(int insert_value)
{
    int low = 0;
    int high = main_chain.size();
    while(low < high)
    {
        int mid = (low + high) / 2;
        if (insert_value < main_chain[mid])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    // now low == high
    std::cout << "position : " << low << std::endl;
    main_chain.insert(main_chain.begin() + low, insert_value);
}


void PmergeMe::insert_by_index()
{
    int jac_index = 1;
    // std::cout << "**** insert***" << std::endl;
    while (1) 
    {
        unsigned long j = getJacobsthal(jac_index);
        if (j >= pend.size())
            break;
        if (!flag_vec[j].second) 
        {
            std::cout << "jacobsthal number " << j << std::endl;
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
            std::cout << flag_vec[i].first << " => send it to binary insert" << std::endl;

            binary_insert(flag_vec[i].first);
            flag_vec[i].second = true;
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
        // pend.push_back(it->first);
        // it++;
    }
    std::sort(pairs.begin(), pairs.end(), compare_pairs);
    fill_largest();
    fill_lowest();
}

bool PmergeMe::check_arg(std::string arg)
{
    if (!is_all_digits(arg))
    {
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

