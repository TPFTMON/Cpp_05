#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"

int main(void){

    PresidentialPardonForm PPF1;
    PresidentialPardonForm PPF2("Jerry");
    PresidentialPardonForm PPF3(PPF2);
    PresidentialPardonForm PPF4("Marlin");
    PPF4 = PPF3;

    Bureaucrat Morgan("Morgan", 2);
    std::cout << "\n";
    PPF1.execute(Morgan);
    PPF2.execute(Morgan);
    PPF3.execute(Morgan);
    PPF4.execute(Morgan);
    std::cout << "\n";

    Bureaucrat Freeman("Freeman", 20);
    try{
        PPF4.execute(Freeman);
    }
    catch (std::exception& e){
        
        std::cerr << "1. Exception caught: " << e.what() << "\n";
    }




    return (0);
}
