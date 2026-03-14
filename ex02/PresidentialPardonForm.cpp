#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

PresidentialPardonForm::PresidentialPardonForm()
 : _target("NO_TARGET"), _gradeRequiredToSign(sign_minimal_grade_PPF), _gradeRequiredToExec(exec_minimal_grade_PPF)
{
    std::cout << DEF_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
 : _target(target), _gradeRequiredToSign(sign_minimal_grade_PPF), _gradeRequiredToExec(exec_minimal_grade_PPF)
{
    std::cout << TARGET_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy)
 : _gradeRequiredToSign(sign_minimal_grade_PPF), _gradeRequiredToExec(exec_minimal_grade_PPF)
{
    std::cout << COPY_CONSTR_MSG << PRESIDENTIALPARDONFORM_MSG;

    this->_target = to_copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << PRESIDENTIALPARDONFORM_MSG;

    if (this != &assign){
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{

    if(executor.getGrade() > this->_gradeRequiredToExec){
        throw PresidentialPardonForm::GradeTooLowException();
    }
    std::cout << "We are informing you that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";

    if(this->_gradeRequiredToSign){
        
    }
}



// ================================================================
//                  OTHER PRESIDENTIALPARDONFORM FUNCTIONS
// ================================================================

// ... other functions
