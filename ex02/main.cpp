#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){

    PresidentialPardonForm PPF1;
    PresidentialPardonForm PPF2("Jerry");
    PresidentialPardonForm PPF3(PPF2);
    PresidentialPardonForm PPF4("Marlin");
    PPF4 = PPF3;

    Bureaucrat Morgan("Morgan", 20);
    PPF1.execute(Morgan);
    PPF2.execute(Morgan);
    PPF3.execute(Morgan);
    PPF4.execute(Morgan);





    return (0);
}
