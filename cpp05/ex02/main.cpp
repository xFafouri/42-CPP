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
        Bureaucrat high("Alice", 1);     
        Bureaucrat mid("Bob", 70);       
        Bureaucrat low("Charlie", 150); 

        // === Test 1: ShrubberyCreationForm ===
        std::cout << "\n--- Testing ShrubberyCreationForm ---\n";
        ShrubberyCreationForm shrub("Garden");


        try 
        {
            shrub.execute(high);
        } catch (const std::exception& e) 
        {
            std::cout << "Shrubbery exec failed (not signed): " << e.what() << std::endl;
        }

        low.signForm(shrub); 
        high.signForm(shrub); 
        mid.executeForm(shrub);
        high.executeForm(shrub); 

        // === Test 2: RobotomyRequestForm ===
        std::cout << "\n--- Testing RobotomyRequestForm ---\n";
        RobotomyRequestForm robot("Bender");

        mid.signForm(robot); 
        mid.executeForm(robot); 

        // === Test 3: PresidentialPardonForm ===
        std::cout << "\n--- Testing PresidentialPardonForm ---\n";
        PresidentialPardonForm pardon("Ford Prefect");

        mid.signForm(pardon);
        high.signForm(pardon);
        mid.executeForm(pardon);
        high.executeForm(pardon);

    } catch (const std::exception& e) 
    {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}

