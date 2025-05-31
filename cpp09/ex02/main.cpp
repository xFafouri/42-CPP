#include "PmergeMe.hpp"
#include <algorithm>
#include <iomanip>
#include <utility>



int main(int ac , char **av)
{
    clock_t start_time = 0;
    clock_t end_time;
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
        A.is_struggle = true;
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

    // display pend
    std::cout << "***pend**" << std::endl; 
    std::vector<int>::iterator itt = A.pend.begin();
    for(; itt != A.pend.end(); itt++)
    {
        std::cout << *itt << " | ";
    }
    std::cout << "\n";

    //display main_chain 
    std::cout << "***main_chain**" << std::endl; 
    std::vector<int>::iterator iter = A.main_chain.begin();
    for(; iter != A.main_chain.end(); iter++)
    {
        std::cout << *iter << " | ";
    }
    std::cout << "\n";

    //fil jacob_sequence
    // make a flag vector for the pend vector with a pair of int and bool 
    // inizialze the bool with false
    A.initialize_flag_vec();
    // display the flag_vec
    // binary search
        //divide the pend by 2
        //sort first the main_chain

    A.insert_by_index();
    if (A.is_struggle)
    {
        A.binary_insert(A.struggle);
    }

    end_time = clock();

    // Calculate duration in seconds
    double duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Operation took "  << duration << " seconds." << std::endl;
    
    std::cout << "***main_chain after sorted**" << std::endl; 
    std::vector<int>::iterator iterator = A.main_chain.begin();
    for(; iterator != A.main_chain.end(); iterator++)
    {
        std::cout << *iterator << std::endl;
    }
}
