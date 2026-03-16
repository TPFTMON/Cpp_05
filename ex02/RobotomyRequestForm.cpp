#include "RobotomyRequestForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

RobotomyRequestForm::RobotomyRequestForm()

 : AForm("Robotomy Request", sign_minimal_grade_RRF, exec_minimal_grade_RRF), _target("NO_TARGET")
{
    std::cout << DEF_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)

 : AForm("Robotomy Request", sign_minimal_grade_RRF, exec_minimal_grade_RRF), _target(target)
{
    std::cout << TARGET_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy)

 : AForm(to_copy)
{
    std::cout << COPY_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

    this->_target = to_copy._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << ROBOTOMYREQUESTFORM_MSG;

    if (this != &assign){
        AForm::operator=(assign);

        this->_target = assign._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){

    std::cout << DESTR_MSG << ROBOTOMYREQUESTFORM_MSG;
}



// ================================================================
//                OTHER ROBOTOMYREQUESTFORM MEMBER FUNCTIONS
// ================================================================

std::string RobotomyRequestForm::getTarget() const{

    return (this->_target);
}

void RobotomyRequestForm::executeForm() const{

    std::cout << "*SOME HORRIBLE DRILLING NOISES*\n";

    srand(time(0));
    bool success = rand() % 2;
    // std::cout << success << "\n";

    if (success == true){
        std::cout << this->_target << " has been robotomized successfully.\n";
    }
    else{
        std::cout << "Robotomy has failed on " << this->_target << " (" << this->_target << "'s dead).\n";
    }
}



// ================================================================
//                  OTHER ROBOTOMYREQUESTFORM FUNCTIONS
// ================================================================

std::ostream& operator<<(std::ostream &os, const RobotomyRequestForm &form){

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
