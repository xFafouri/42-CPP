#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name , int grade) : name (name) , grade(grade)
{
    std::cout << "Bureaucrat constructed!" << std::endl;
    if(this->grade < 1)
        throw GradeTooHighException();
    if(this->grade > 150)
        throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return *this;
}


void Bureaucrat::incrementGrade()
{
    
    if(this->grade - 1 < 1)
        throw GradeTooHighException();
    else
    {
        this->grade--;
    }
}

void Bureaucrat::decrementGrade()
{
    if(this->grade + 1 > 150)
        throw GradeTooLowException();
    else
    {
        this->grade++;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade too Low!";
}


void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
        throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

std::string  Bureaucrat::getName() const
{
    return(name);
}


std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}
