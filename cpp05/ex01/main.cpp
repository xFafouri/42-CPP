
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat A("Hamza", 50); 
        Form taxForm("TaxForm", 75, 50);

        A.signForm(taxForm);

        Bureaucrat B("Fafouri", 100);
        Form vacationForm("VacationRequest", 50, 25);

        B.signForm(vacationForm); 
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }
    return 0;
}
