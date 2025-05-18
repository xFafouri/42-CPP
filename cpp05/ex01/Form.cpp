#include "Form.hpp"

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) : name(name), gradeToSign(gradeToSign) , gradeToExecute(gradeToExecute)
{
    this->IsSigned = false;
    std::cout << "Form constructed !" << std::endl;
    if(this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if(this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &obj): name(obj.getName()),IsSigned(false) , gradeToSign(obj.getGradeToSign()), gradeToExecute(obj.getGradeToExecute())
{
	*this = obj;
}

Form &Form::operator=(const Form &obj) 
{
    if (this != &obj)
    {
        this->IsSigned = obj.IsSigned;
    }
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() 
{
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() 
{
    return "Grade too Low!";
}

//Getter
std::string Form::getName() const
{
    return (name);
}

bool Form::getIsSigned() const
{
    return (IsSigned);
}

int Form::getGradeToSign() const
{
    return(gradeToSign);
}

int Form::getGradeToExecute() const
{
    return(gradeToExecute);
}

void Form::beSigned(Bureaucrat const &A)
{
    if (A.getGrade() <= gradeToSign)
    {
        IsSigned = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}


std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName() << ", Form grade to sign : " << obj.getGradeToSign()  << "Form status : " << obj.getIsSigned() << ", Form grade to execute : " << obj.getGradeToExecute();
    return out;
}

Form::~Form()
{
    std::cout << "Form destructed !" << std::endl;
}
