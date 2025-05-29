
#include <iostream>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <algorithm>

struct greaters {
    bool operator()(const long& a, const long& b) const
    {
        return a > b;
    }
};

int main()
{
    // initializing 1st container
    std::vector<int> arr1 = { 1, 4, 6, 3, 2 };

    // initializing 2nd container
    std::vector<int> arr2 = { 6, 2, 5, 7, 1 };

    // declaring resultant container
    std::vector<int> arr3(10);

    // sorting initial containers
    // in descending order
    sort(arr1.rbegin(), arr1.rend());
    sort(arr2.rbegin(), arr2.rend());

    // using merge() to merge the initial containers
    // returns descended merged container
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin(), greaters());

    // printing the resultant merged container
    std::cout << "The container after reverse merging initial containers is : ";

    for (int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << " ";
    return 0;
}