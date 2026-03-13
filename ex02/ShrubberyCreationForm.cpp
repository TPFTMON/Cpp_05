#include "ShrubberyCreationForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

ShrubberyCreationForm::ShrubberyCreationForm(){
    std::cout << DEF_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy){
    std::cout << COPY_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;
    // ... copying

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
    std::cout << COPY_ASSIGN_OP_MSG << SHRUBBERYCREATIONFORM_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << DESTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}



// ================================================================
//                OTHER SHRUBBERYCREATIONFORM MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER SHRUBBERYCREATIONFORM FUNCTIONS
// ================================================================

// ... other functions
