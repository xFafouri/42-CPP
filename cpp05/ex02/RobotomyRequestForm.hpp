#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        virtual void execute(Bureaucrat const & executor) const;
        virtual void executeAction() const;
        ~RobotomyRequestForm();
};

#endif 
