#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        Bureaucrat(std::string const name , int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string  getName() const;
        int  getGrade() const;
        void setGrade(int const grade);
        void incrementGrade();
        void decrementGrade();
        void executeForm(AForm const & form);
        void signForm(AForm &);
        ~Bureaucrat();
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif 
