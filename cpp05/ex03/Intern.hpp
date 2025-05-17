#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string.h>

#include <iostream>

class Intern
{
    public:
        Intern();
        AForm* makeForm(std::string FormName, std::string targetForm);
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();
};

#endif 
