#include "PresidentialPardonForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

PresidentialPardonForm::PresidentialPardonForm()
 : _target("NO_TARGET"), _gradeRequiredToSign(sign_minimal_grade_PPF), _gradeRequiredToExec(exec_minimal_grade_PPF)
{
    std::cout << DEF_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target){
    std::cout << TARGET_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy){
    std::cout << COPY_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;
    // ... copying

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &assign){
    std::cout << COPY_ASSIGN_OP_MSG << PRESIDENTIALPARDONFORM_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;

}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << DESTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}



// ================================================================
//                OTHER PRESIDENTIALPARDONFORM MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER PRESIDENTIALPARDONFORM FUNCTIONS
// ================================================================

// ... other functions
