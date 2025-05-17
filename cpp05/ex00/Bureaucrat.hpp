#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        Bureaucrat(std::string const name , int grade);
        std::string  getName() const; 
        int  getGrade() const;
        void setGrade(int const grade);
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);


#endif 
