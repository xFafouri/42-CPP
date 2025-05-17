#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(std::string const target);
        // ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        // ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        // void executeAction();
        virtual void execute(Bureaucrat const & executor) const;
        virtual void executeAction() const;
        ~ShrubberyCreationForm();
};

#endif 
