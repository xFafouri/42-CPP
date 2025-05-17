#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Intern someRandomIntern;
        AForm* form;

        std::cout << "=== TEST 1: Valid form creation (RobotomyRequestForm) ===" << std::endl;
        form = someRandomIntern.makeForm("robotomy request", "Bender");
        if (form) {
            Bureaucrat bob("Bob", 1);  // High grade bureaucrat
            bob.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }

        std::cout << "\n=== TEST 2: Valid form creation (ShrubberyCreationForm) ===" << std::endl;
        form = someRandomIntern.makeForm("shrubbery creation", "Garden");
        if (form) {
            Bureaucrat alice("Alice", 1);
            alice.signForm(*form);
            alice.executeForm(*form);
            delete form;
        }

        std::cout << "\n=== TEST 3: Valid form creation (PresidentialPardonForm) ===" << std::endl;
        form = someRandomIntern.makeForm("presidential pardon", "Marvin");
        if (form) {
            Bureaucrat zaphod("Zaphod", 1);
            zaphod.signForm(*form);
            zaphod.executeForm(*form);
            delete form;
        }

        std::cout << "\n=== TEST 4: Invalid form creation ===" << std::endl;
        form = someRandomIntern.makeForm("unknown form", "Nobody");
        if (!form) {
            std::cout << "Form creation failed as expected.\n";
        }

    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}
