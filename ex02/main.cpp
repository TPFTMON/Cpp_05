#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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



    RobotomyRequestForm RRF1;
    RobotomyRequestForm RRF2("Zac");
    RobotomyRequestForm RRF3(RRF2);
    RobotomyRequestForm RRF4("Some Other Guy Initially");
    RRF4 = RRF3;

    std::cout << "\n";
    std::cout << RRF1;
    std::cout << RRF2;
    std::cout << RRF3;
    std::cout << RRF4;
    std::cout << "\n";



    ShrubberyCreationForm SCF1;
    ShrubberyCreationForm SCF2("Millie's office");
    ShrubberyCreationForm SCF3(SCF2);
    ShrubberyCreationForm SCF4("Some Other Guy Initially");
    SCF4 = SCF3;

    std::cout << "\n";
    std::cout << SCF1;
    std::cout << SCF2;
    std::cout << SCF3;
    std::cout << SCF4;
    std::cout << "\n";

// ---------------------------------------------------------------



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



    // executeForm() and PresidentialPardon functioning tests:
    PresidentialPardonForm PP2("Daniel");
    Bureaucrat Victor("Victor", 2);
    Bureaucrat Nina("Nina", 20);
    std::cout << "\n";

    try{
        Victor.executeForm(PP2);
    }
    catch (std::exception& e){

        std::cerr << "3. Exception caught: " << e.what() << "\n";
    }
    Victor.signForm(PP2);
    try{
        Nina.executeForm(PP2);
    }
    catch (std::exception& e){

        std::cerr << "4. Exception caught: " << e.what() << "\n";
    }
    Victor.executeForm(PP2);
    std::cout << "\n";

// ---------------------------------------------------------------

    // RobotomyRequest functioning tests:
    RobotomyRequestForm RR("Daniel");
    Bureaucrat Boris("Boris", 40);
    Bureaucrat Faesal("Faesal", 80);
    std::cout << "\n";

    std::cout << RR;
    try{
        Boris.executeForm(RR);
    }
    catch (std::exception& e){

        std::cerr << "5. Exception caught: " << e.what() << "\n";
    }
    Boris.signForm(RR);
    std::cout << RR;
    try{
        Faesal.executeForm(RR);
    }
    catch (std::exception& e){

        std::cerr << "6. Exception caught: " << e.what() << "\n";
    }
    Boris.executeForm(RR);
    std::cout << "\n";

    return (0);
}
