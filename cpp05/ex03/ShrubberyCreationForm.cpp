#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
    : AForm("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm constructed !" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
// {
// }

void ShrubberyCreationForm::executeAction() const
{
    
    std::cout << "-------" << std::endl;
    std::string File = getName() + "_shrubbery";
    std::ofstream Newfile(File.c_str());
    int height = 10;
    for (int i = 0; i < height; i++) {
        std::string line = "";
        for (int j = 0; j < height - i - 1; j++) {
            line += " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            line += "*";
        }
        Newfile << line << std::endl;
    }
    for (int i = 0; i < height / 3; i++) {
        std::string line = "";
         for (int j = 0; j < height - 1; j++) {
            line += " ";
        }
        line += "| |";
        Newfile << line << std::endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }
    if (executor.getGrade() > getGradeToExecute()) 
    {
        std::cout << "executor.getGrade() : "<< executor.getGrade()  << std::endl;
        std::cout << "executor.getGradeToExecute() : "<< getGradeToExecute()  << std::endl;
        throw AForm::GradeTooLowException();
    }
    executeAction();
}



ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructed !" << std::endl;
}
