#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
    : AForm("RobotomyRequestForm", 72, 45, target)
{
    std::cout << "RobotomyRequestForm constructed !" << std::endl;
}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
// {
//
// }

void RobotomyRequestForm::executeAction() const
{
    if (rand() % 2 == 0)
    {
        std::cout << getTarget() << " has been robotomized successfully 50\% of the time." << std::endl;
    }
    else
    {
        std::cout << "robotomy failed" << std::endl;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > getGradeToExecute()) 
    {
        throw AForm::GradeTooLowException();
    }
    executeAction();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructed !" << std::endl;
}
