#include "header.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "nb arg error" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    filename.append(".replace");
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string Mytext;
    size_t index = 0;


    std::ifstream Myreadfile(av[1]);
    if (!Myreadfile.is_open())
    {
        std::cerr << "Error , can't open file" << std::endl;
        return 1;
    }

    std::ofstream Newfile(filename.c_str());
    while (std::getline(Myreadfile, Mytext))
    {
        index = Mytext.find(s1);
        while (index != std::string::npos)
        {
            // remove
            Mytext.erase(index, s1.length());
            // insert
            Mytext.insert(index,s2);
            // find
            index = Mytext.find(s1);
        }
        Newfile << Mytext;
        if (Myreadfile.eof())
            break ;
        Newfile << std::endl;
    }
    Myreadfile.close();
    Newfile.close();
}