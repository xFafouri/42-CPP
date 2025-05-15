#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool IsSigned;
        const int gradeToSign;
        const int gradeToExecute;  
    public:
        Form(std::string const name, int const gradeToSign, int const gradeToExecute);
        // Form(const Form &obj);
        // Form &operator=(const Form &obj);
        void beSigned(Bureaucrat const &);

        //exception
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

        //Getter
        int getGradeToSign() const;
        bool    getIsSigned() const;
        int getGradeToExecute() const;
        std::string getName() const;
        ~Form();
};

#endif 
