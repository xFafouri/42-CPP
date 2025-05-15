#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool IsSigned;
        const int gradeToSign;
        const int gradeToExecute;  
        std::string target;
    public:
        AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
        // AForm(const AForm &obj);
        // AForm &operator=(const AForm &obj);
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
        std::string getTarget() const;
        void setTarget(std::string target);
        ~AForm();
};

#endif 
