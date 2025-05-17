#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name , int grade) : name (name) , grade(grade)
{
    std::cout << "Bureaucrat constructed!" << std::endl;
    if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        this->grade = obj.grade;
    return *this;
}

// Bureaucrat::Bureaucrat(const Bureaucrat &obj)
// {
//     *this = &obj; 
// }

// Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
// {
//     if (this != &obj)
//     {
//         this->name = obj.name;
//         this->grade = obj.grade;
//     }
//     return *this;
// }


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
// std::exception Bureaucrat::GradeTooHighException()
// {
//     return ("Grade Too High !");
// }

// std::exception Bureaucrat::GradeTooLowException()
// {
//     return ("Grade Too Low !");

// }

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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

void Bureaucrat::signForm(Form &A)
{
   try
   {
        A.beSigned(*this);
        std::cout << this->getName() << " signed " << A.getName() << std::endl;
        // std::cout << "***" << A.getGradeToSign();
   }
   catch (const std::exception &e)
   {
        std::cout << this->getName() << " couldn’t sign " << A.getName() << " because " << e.what() << std::endl;
   }
}


// std::string Bureaucrat::GradeTooHighException()
// {
//     try
//     {
//         // this->grade -= add;
//         if (this->grade <= 150 || this->grade <= 1)
//             throw  "grade is out of range";
//     }
//     catch (std::exception & e)
//     {
//         std::cout << &e << std::endl; 
//     }
// }


// void Bureaucrat::setName(std::string const name)
// {
//     this->name = name;
// }

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructed!" << std::endl;
}
