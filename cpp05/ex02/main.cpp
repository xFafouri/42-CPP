#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include <ctime>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
 {

    try {
        Bureaucrat high("Alice", 1);      // Can do everything
        Bureaucrat mid("Bob", 70);        // Can sign/exec Robotomy only
        Bureaucrat low("Charlie", 150);   // Can't sign or exec anything

        // === Test 1: ShrubberyCreationForm ===
        std::cout << "\n--- Testing ShrubberyCreationForm ---\n";
        ShrubberyCreationForm shrub("Garden");

        // Attempt execution before signing
        try {
            shrub.execute(high);
        } catch (const std::exception& e) {
            std::cout << "Shrubbery exec failed (not signed): " << e.what() << std::endl;
        }

        low.signForm(shrub); // should fail
        high.signForm(shrub); // should succeed
        mid.executeForm(shrub); // should fail (grade 70 < exec grade 137)
        high.executeForm(shrub); // should succeed

        // === Test 2: RobotomyRequestForm ===
        std::cout << "\n--- Testing RobotomyRequestForm ---\n";
        RobotomyRequestForm robot("Bender");

        mid.signForm(robot); // should succeed (72)
        mid.executeForm(robot); // should succeed (45)
        mid.executeForm(robot); // test randomness
        mid.executeForm(robot); // test randomness

        // === Test 3: PresidentialPardonForm ===
        std::cout << "\n--- Testing PresidentialPardonForm ---\n";
        PresidentialPardonForm pardon("Ford Prefect");

        mid.signForm(pardon); // should fail (grade 70 > required 25)
        high.signForm(pardon); // should succeed
        mid.executeForm(pardon); // should fail (grade 70 > required 5)
        high.executeForm(pardon); // should succeed

    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}

