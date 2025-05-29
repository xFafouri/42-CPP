#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <iostream>
#include <map>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>
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
        int parsing_input(std::string str, std::string number);
        bool manage_error(std::string str, std::string number);
        void searchInMap();
        float dd;
        float mm;
        float yy;
        Bitcoin &operator=(const Bitcoin &obj);
        ~Bitcoin();
};

#endif 
