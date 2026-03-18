#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void){

    // Intern testing:
    Intern someRandomIntern;
    AForm* ppf;

    ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
    Bureaucrat Victor("Victor", 2);
    Bureaucrat Nina("Nina", 20);
    std::cout << "\n";

    std::cout << *ppf;
    Victor.executeForm(*ppf);
    Victor.signForm(*ppf);
    std::cout << *ppf;

    Nina.executeForm(*ppf);
    Victor.executeForm(*ppf);
    std::cout << "\n";


// ----------------------------------------------------------------

    Intern someOtherRandomIntern;
    AForm* rrf;

    rrf = someOtherRandomIntern.makeForm("robotomy request", "Daniel");
    Bureaucrat Boris("Boris", 40);
    Bureaucrat Faesal("Faesal", 80);
    std::cout << "\n";

    std::cout << *rrf;
    Boris.executeForm(*rrf);
    Boris.signForm(*rrf);
    std::cout << *rrf;

    Faesal.executeForm(*rrf);
    Boris.executeForm(*rrf);
    std::cout << "\n";


// ----------------------------------------------------------------

    Intern someVERYOtherRandomIntern;
    AForm* scf;

    scf = someVERYOtherRandomIntern.makeForm("shrubbery creation", "Home");
    Bureaucrat Ivy("Ivy", 130);
    Bureaucrat Li("Li", 148);
    std::cout << "\n";

    std::cout << *scf;
    Ivy.executeForm(*scf);
    Ivy.signForm(*scf);
    std::cout << *scf;

    Li.executeForm(*scf);
    Ivy.executeForm(*scf);
    std::cout << "\n";


// ----------------------------------------------------------------

    Intern scaredIntern;
    AForm* unknownForm;
    unknownForm = scaredIntern.makeForm("some new random", "Victor");



    delete ppf;
    delete rrf;
    delete scf;

    return (0);
}




















//     // OCF testing:
//     PresidentialPardonForm PPF1;
//     PresidentialPardonForm PPF2("Jerry");
//     PresidentialPardonForm PPF3(PPF2);
//     PresidentialPardonForm PPF4("Some Other Guy Initially");
//     PPF4 = PPF3;

//     std::cout << "\n";
//     std::cout << PPF1;
//     std::cout << PPF2;
//     std::cout << PPF3;
//     std::cout << PPF4;
//     std::cout << "\n";



//     RobotomyRequestForm RRF1;
//     RobotomyRequestForm RRF2("Zac");
//     RobotomyRequestForm RRF3(RRF2);
//     RobotomyRequestForm RRF4("Some Other Guy Initially");
//     RRF4 = RRF3;

//     std::cout << "\n";
//     std::cout << RRF1;
//     std::cout << RRF2;
//     std::cout << RRF3;
//     std::cout << RRF4;
//     std::cout << "\n";



//     ShrubberyCreationForm SCF1;
//     ShrubberyCreationForm SCF2("Millie's office");
//     ShrubberyCreationForm SCF3(SCF2);
//     ShrubberyCreationForm SCF4("Some Other Thing Initially");
//     SCF4 = SCF3;

//     std::cout << "\n";
//     std::cout << SCF1;
//     std::cout << SCF2;
//     std::cout << SCF3;
//     std::cout << SCF4;
//     std::cout << "\n";



// // ---------------------------------------------------------------



//     // execute() tests:
//     PresidentialPardonForm PP_test("Betty");
//     Bureaucrat Morgan("Morgan", 2);
//     Bureaucrat Freeman("Freeman", 20);
//     std::cout << "\n";

//     std::cout << PP_test;
//     try{
//         PP_test.execute(Morgan);
//     }
//     catch (std::exception& e){

//         std::cerr << "1. Exception caught: " << e.what() << "\n\n";
//     }
//     Morgan.signForm(PP_test);
//     std::cout << PP_test;
//     try{
//         PP_test.execute(Freeman);
//     }
//     catch (std::exception& e){

//         std::cerr << "2. Exception caught: " << e.what() << "\n";
//     }
//     PP_test.execute(Morgan);
//     std::cout << "\n";


// // ----------------------------------------------------------


//     // executeForm() and PresidentialPardon functioning tests:
//     PresidentialPardonForm PP("Daniel");
//     Bureaucrat Victor("Victor", 2);
//     Bureaucrat Nina("Nina", 20);
//     std::cout << "\n";

//     std::cout << PP;
//     Victor.executeForm(PP);
//     Victor.signForm(PP);
//     std::cout << PP;

//     Nina.executeForm(PP);
//     Victor.executeForm(PP);
//     std::cout << "\n";


// // ---------------------------------------------------------------


//     // RobotomyRequest functioning tests:
//     RobotomyRequestForm RR("Daniel");
//     Bureaucrat Boris("Boris", 40);
//     Bureaucrat Faesal("Faesal", 80);
//     std::cout << "\n";

//     std::cout << RR;
//     Boris.executeForm(RR);
//     Boris.signForm(RR);
//     std::cout << RR;

//     Faesal.executeForm(RR);
//     Boris.executeForm(RR);
//     std::cout << "\n";


// // ---------------------------------------------------------------


//     // ShrubberyCreation functioning tests:
//     ShrubberyCreationForm CS("Wardrobe");
//     Bureaucrat Ivy("Ivy", 130);
//     Bureaucrat Li("Li", 148);
//     std::cout << "\n";

//     std::cout << CS;
//     Ivy.executeForm(CS);
//     Ivy.signForm(CS);
//     std::cout << CS;

//     Li.executeForm(CS);
//     Ivy.executeForm(CS);
//     std::cout << "\n";
