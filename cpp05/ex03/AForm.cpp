#include "AForm.hpp"

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute, std::string const target) 
    : name(name), gradeToSign(gradeToSign) , gradeToExecute(gradeToExecute), target(target)
{
    std::cout << "AForm constructed !" << std::endl;
    if(this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if(this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

// AForm::AForm(const AForm &obj)
// {
// }

// AForm &AForm::operator=(const AForm &obj)
// {
//     if (this != &obj)
//     {
        
//     }
//     return *this;
// }

const char* AForm::GradeTooHighException::what() const throw() 
{
    return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() 
{
    return "Grade too Low!";
}

const char* AForm::FormNotSignedException::what() const throw() 
{
    return "Form Not Signed!";
}
//Getter
std::string AForm::getName() const
{
    return (name);
}

std::string AForm::getTarget() const
{
    return (target);
}

// void AForm::setTarget(std::string target)
// {
//     this->target = target;
// }

bool AForm::getIsSigned() const
{
    return (IsSigned);
}

int AForm::getGradeToSign() const
{
    return(gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return(gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &A)
{
    if (A.getGrade() <= gradeToSign)
    {
        IsSigned = true;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}


std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << obj.getName() << ", AForm grade to sign : " << obj.getGradeToSign() 
    << "AForm status : " << obj.getGradeToSign()
    << ", AForm grade to execute : " << obj.getGradeToExecute();
    return out;
}

AForm::~AForm()
{
    std::cout << "AForm destructed !" << std::endl;
}
