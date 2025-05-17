#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(std::string const target);
        // PresidentialPardonForm(const PresidentialPardonForm &obj);
        // PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        // void executeAction();
        virtual void execute(Bureaucrat const & executor) const;
        virtual void executeAction() const;
        ~PresidentialPardonForm();
};

#endif 
