#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
    : AForm("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm constructed !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    (void)obj;
    return *this;
}

void ShrubberyCreationForm::executeAction() const
{
    
    std::string File = getName() + "_shrubbery";

    std::ofstream Newfile(File.c_str());
    Newfile << "      _ -_" << std::endl;
    Newfile << "    / **   **\\" << std::endl;
    Newfile << " /************~\\" << std::endl;
    Newfile << "|***************|" << std::endl;
    Newfile << " \\ **********/" << std::endl;
    Newfile << "   ~  \\ //   " << std::endl;
    Newfile << "_''''' | | '''" << std::endl;
    Newfile << "  _ -  | | ''''_" << std::endl;
    Newfile << "      // \\\\" << std::endl;
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
    std::cout << "ShrubberyCreationForm destructed !" << std::endl;
}
