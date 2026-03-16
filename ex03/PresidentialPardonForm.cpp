#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

PresidentialPardonForm::PresidentialPardonForm()

 : AForm("Presidential Pardon", sign_minimal_grade_PPF, exec_minimal_grade_PPF), _target("NO_TARGET")
{
    std::cout << DEF_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target)

 : AForm("Presidential Pardon", sign_minimal_grade_PPF, exec_minimal_grade_PPF), _target(target)
{
    std::cout << TARGET_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy)

 : AForm(to_copy)
{
    std::cout << COPY_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

    this->_target = to_copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << PRESIDENTIALPARDONFORM_MSG;

    if (this != &assign){
        AForm::operator=(assign);

        this->_target = assign._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){

    std::cout << DESTR_MSG << PRESIDENTIALPARDONFORM_MSG;
}



// ================================================================
//                OTHER PRESIDENTIALPARDONFORM MEMBER FUNCTIONS
// ================================================================

std::string PresidentialPardonForm::getTarget() const{

    return (this->_target);
}

void PresidentialPardonForm::executeForm() const{

    std::cout << "We are informing you that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}



// ================================================================
//                  OTHER PRESIDENTIALPARDONFORM FUNCTIONS
// ================================================================

std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &form){

    std::string is_signed;
    if (form.getIsSigned() == true){
        is_signed = "yes";
    }
    else{
        is_signed = "no";
    }

    os << "Form named " << form.getName() << ", info: Required Grade to be signed: {" << form.getRequiredGradeToSign() << "} | Required Grade to be executed: {" << form.getRequiredGradeToExec() << "} | Is this form signed? -> {" << is_signed << "} | Form's target: {" << form.getTarget() << "}\n";
    return (os);
}
