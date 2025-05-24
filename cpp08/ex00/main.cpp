#include "easyfind.hpp"
#include <vector>


int main()
{
    std::list<int> list;
    std::vector<int> arr;


    for(int i = 0; i <= 5 ; i++)
    {
        list.push_back(i);
        arr.push_back(i);
    }
    easyfind(list, 4);
    easyfind(list, 6);


}