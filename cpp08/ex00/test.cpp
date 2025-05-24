#include <algorithm>
#include <iostream>

#include <iterator>
#include <list>
#include <vector>


void    Display_Mylist(const std::list<int> &list, std::string grade)
{
    std::cout << grade << " :"<< std::endl;
    for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

int main()
{
    std::list<int> Mylist = {9, 1 ,5 ,4 ,0, 7};

    std::list<int> High;
    std::list<int> Low;
    
    std::cout << "***LIST****" << std::endl;
    for(std::list<int>::iterator it = Mylist.begin(); it != Mylist.end(); it++)
    {
        if (*it >= 5)
        {
            High.push_back(*it);
        }
        else {
            Low.push_back(*it);
        }
    }
    Display_Mylist(High, "High");
    Display_Mylist(Low , "Low");

    Mylist.sort();
    // std::list<int>::iterator begin = Mylist.begin();
    // std::list<int>::iterator end = Mylist.end();
    // list<int>::sort(Mylist.begin(), Mylist.end() );
    Display_Mylist(Mylist , "Mylist");

    std::cout << "****ARRAY***" << std::endl;
    std::vector<int> arr = {9, 1 ,5 ,4 ,0, 7};
    std::sort(arr.begin(), arr.end());

    for (std::vector<int>::iterator it = arr.begin() ; it != arr.end() ; *it++ )
    {
        std::cout << *it << std::endl;
    }
}