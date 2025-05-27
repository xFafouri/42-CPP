#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <iostream>
#include <map>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>
class Bitcoin
{
    public:
        std::map<std::string, float> map;
        std::map<std::string, float> inputFile;
        std::string line;
        std::string date;
        std::string test;
        float value;
        Bitcoin();
        Bitcoin(const Bitcoin &obj);
        void AddToContainer(std::string date, float value);
        void fill_DataBase();
        void display_map();
        Bitcoin &operator=(const Bitcoin &obj);
        ~Bitcoin();
};

#endif 
