#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
{
     
    std::cout << "ShrubberyCreationForm constructed !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
}

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
// {
//     if (this != &obj)
//     {
        
//     }
//     return *this;
// }



ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
