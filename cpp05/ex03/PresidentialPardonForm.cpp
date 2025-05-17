#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
    : AForm("PresidentialPardonForm", 25, 5, target)
{
    std::cout << "PresidentialPardonForm constructed !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    return (*this);
}
void PresidentialPardonForm::executeAction() const
{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "RobotomyRequestForm destructed !" << std::endl;
}
