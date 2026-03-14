#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"

int main(void){

    // OCF testing:
    PresidentialPardonForm PPF1;
    PresidentialPardonForm PPF2("Jerry");
    PresidentialPardonForm PPF3(PPF2);
    PresidentialPardonForm PPF4("Some Other Guy Initially");
    PPF4 = PPF3;


    std::cout << "\n";
    std::cout << PPF1;
    std::cout << PPF2;
    std::cout << PPF3;
    std::cout << PPF4;
    std::cout << "\n";



    // execute() tests for Presidential Pardon:
    PresidentialPardonForm PP("Betty");
    Bureaucrat Morgan("Morgan", 2);
    Bureaucrat Freeman("Freeman", 20);
    std::cout << "\n";

    std::cout << PP;
    try{
        PP.execute(Morgan);
    }
    catch (std::exception& e){

        std::cerr << "1. Exception caught: " << e.what() << "\n\n";
    }
    Morgan.signForm(PP);
    std::cout << PP;
    try{
        PP.execute(Freeman);
    }
    catch (std::exception& e){

        std::cerr << "2. Exception caught: " << e.what() << "\n";
    }
    PP.execute(Morgan);
    std::cout << "\n";



    // executeForm() tests:
    PresidentialPardonForm PP2("Daniel");
    Bureaucrat Victor("Victor", 2);
    Bureaucrat Nina("Nina", 20);
    std::cout << "\n";

    try{
        Victor.executeForm(PP2);
    }
    catch (std::exception& e){

        std::cerr << "2. Exception caught: " << e.what() << "\n";
    }
    Victor.signForm(PP2);
    try{
        Nina.executeForm(PP2);
    }
    catch (std::exception& e){

        std::cerr << "2. Exception caught: " << e.what() << "\n";
    }
    Victor.executeForm(PP2);
    std::cout << "\n";


    return (0);
}
