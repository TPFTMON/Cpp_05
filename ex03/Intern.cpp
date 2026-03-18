#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Intern::Intern(){
    std::cout << DEF_CONSTR_MSG << INTERN_MSG;

}

Intern::Intern(const Intern &to_copy){
    std::cout << COPY_CONSTR_MSG << INTERN_MSG;
    // ... copying
    (void)to_copy;

}

Intern& Intern::operator=(const Intern &assign){
    std::cout << COPY_ASSIGN_OP_MSG << INTERN_MSG;
    if (this != &assign){
        // ... assigning
        (void)assign;
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

    PresidentialPardonForm *presidential = new PresidentialPardonForm(target);

    return (presidential);
}

AForm   *Intern::makeRobotomyRequest(std::string const &target) const{

    RobotomyRequestForm *robotomy = new RobotomyRequestForm(target);

    return (robotomy);
}

AForm   *Intern::makeShrubberyCreation(std::string const &target) const{

    ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm(target);

    return (shrubbery);
}


typedef AForm *(Intern::*InternMakeFormMemFn)(const std::string &target) const;
//               ||
//               \/
AForm   *Intern::makeForm(std::string formType, std::string target){

    // std::string type = formType;

    // for (size_t i = 0; i < type.length(); ++i){                       // I thought I would just transform the string to lowercase. But whatever.
    //     type[i] = std::tolower(static_cast<unsigned char>(type[i]));
    // }

    std::string types[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };

    InternMakeFormMemFn functions[3] = {
        &Intern::makePresidentialPardon,
        &Intern::makeRobotomyRequest,
        &Intern::makeShrubberyCreation
    };

    for (int i = 0; i < 3; i++){
        if (formType == types[i]){
            std::cout << "Intern creates " << formType << " form.\n";
            return ((this->*functions[i])(target));
        }
    }
    std::cout << "Intern cannot create " << formType << " form. It does not exist.\n";
    return (NULL);

}



// ================================================================
//                  OTHER INTERN FUNCTIONS
// ================================================================

// ... other functions
