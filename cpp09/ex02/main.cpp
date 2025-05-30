#include "PmergeMe.hpp"
#include <algorithm>
#include <utility>



int main(int ac , char **av)
{
    PmergeMe A;
    int i = 1;
    if (ac < 2)
    {
        std::cerr << "Error : nb of arg !" << std::endl;
        return 1;
    }

    if (i < ac)
    {
        while (av[i])
        {
            if(!A.check_arg(av[i]))
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
            A.fill_vector();
            i++;
        }
    }
    if (A.vector.size() % 2 != 0)
    {
        std::cout << "struggle = " << A.struggle << std::endl;
        A.vector.pop_back();   
    }
    A.fill_in_pair();

    
    std::vector<std::pair<int, int> >::iterator it = A.pairs.begin();
    for (;it != A.pairs.end(); it++) 
    {
        std::cout << "{" << it->first << ", " << it->second
             << "}" << std::endl;
    }
    //sort the pairs depend the largest element 
    // std::vector<std::pair<int, int> >::iterator iter = A.pairs.begin();
    // 


    // display largest
    std::cout << "***largest**" << std::endl; 
    std::vector<int>::iterator itt = A.largest.begin();
    for(; itt != A.largest.end(); itt++)
    {
        std::cout << *itt << " | ";
    }
    std::cout << "\n";

    //display lowest 
    std::cout << "***lowest**" << std::endl; 
    std::vector<int>::iterator iter = A.lowest.begin();
    for(; iter != A.lowest.end(); iter++)
    {
        std::cout << *iter << " | ";
    }
    std::cout << "\n";

    //fil jacob_sequence
    // make a flag vector for the largest vector with a pair of int and bool 
    // inizialze the bool with false
    A.initialize_flag_vec();
    // display the flag_vec

    // for (size_t i = 0; i < A.flag_vec.size(); ++i)
    // {
    //     std::cout << "number = " << A.flag_vec[i].first << " | " << A.flag_vec[i].second << std::endl;
    // }

    // std::cout << "jacob number = " << A.getJacobsthal(4) << std::endl;
    // A.fill_jacob_sequence();
    // std::cout << "***jacob sequence**" << std::endl; 
    // std::vector<int>::iterator jacob = A.jacob_sequence.begin();
    // for(; jacob != A.jacob_sequence.end(); jacob++)
    // {
    //     std::cout << *jacob << std::endl;
    // }

    // binary search
        //divide the largest by 2
        //sort first the lowest
    // std::vector<int>::iterator iy = A.lowest.begin();
    // std::sort(iy , A.lowest.end());
    // std::cout << "***sorted lowest**" << std::endl; 
    // std::vector<int>::iterator iit = A.lowest.begin();
    // for(; iit != A.lowest.end(); iit++)
    // {
    //     std::cout << *iit << " | ";
    // }
    // std::cout << "\n";qazwsxedcrfvbgy

    A.insert_by_index();
    std::cout << "***sorted**" << std::endl; 
    std::vector<int>::iterator iterator = A.lowest.begin();
    for(; iterator != A.lowest.end(); iterator++)
    {
        std::cout << *iterator << std::endl;
    }

    // std::cout << "***largest**" << std::endl; 
    // std::vector<int>::iterator iy = A.largest.begin();
    // for(; iy != A.largest.end(); iy++)
    // {
    //     std::cout << *iy << std::endl;
    // }
    
    // A.vector.insert(std::pair<int,  int>())
    // A.display();
}
