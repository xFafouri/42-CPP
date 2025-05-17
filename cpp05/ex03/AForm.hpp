#ifndef AFORM_HPP
#define AFORM_HPP

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
        std::string  const target;
    public:
        AForm(std::string const name, int const gradeToSign, int const gradeToExecute, std::string const target);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        void beSigned(Bureaucrat const &A);

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
        class FormNotSignedException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual void executeAction() const = 0;

        //Getter
        int getGradeToSign() const;
        bool    getIsSigned() const;
        int getGradeToExecute() const;
        std::string getName() const;
        std::string getTarget() const;
        // void setTarget(std::string target);
        virtual ~AForm();
};

#endif 
