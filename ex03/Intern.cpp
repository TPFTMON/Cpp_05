#include "Intern.hpp"
#include "AForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Intern::Intern(){
    std::cout << DEF_CONSTR_MSG << INTERN_MSG;

}

Intern::Intern(const Intern &to_copy){
    std::cout << COPY_CONSTR_MSG << INTERN_MSG;
    // ... copying

}

Intern& Intern::operator=(const Intern &assign){
    std::cout << COPY_ASSIGN_OP_MSG << INTERN_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

Intern::~Intern(){
    std::cout << DESTR_MSG << INTERN_MSG;

}



// ================================================================
//                OTHER INTERN MEMBER FUNCTIONS
// ================================================================

// provate Intern functions:
AForm   *Intern::makePresidentialPardon(std::string const &target) const{

}

AForm   *Intern::makeRobotomyRequest(std::string const &target) const{

}

AForm   *Intern::makeShrubberyCreation(std::string const &target) const{

}



typedef AForm *(Intern::*InternMakeFormMemFn)(const std::string &target) const;

AForm   *makeForm(std::string formType, std::string target){

    std::string types[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };

    InternMakeFormMemFn functions[3] = {
        &Intern::makePresidentialPardon,
        &Intern::makeRobotomyRequest,
        &Intern::makeShrubberyCreation,
    };

}



// ================================================================
//                  OTHER INTERN FUNCTIONS
// ================================================================

// ... other functions
