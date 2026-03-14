#include "RobotomyRequestForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

RobotomyRequestForm::RobotomyRequestForm()
 : _target("NO_TARGET"), _gradeRequiredToSign(sign_minimal_grade_RRF), _gradeRequiredToExec(exec_minimal_grade_RRF)
{
    std::cout << DEF_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
 : _target(target), _gradeRequiredToSign(sign_minimal_grade_RRF), _gradeRequiredToExec(exec_minimal_grade_RRF)
{
    std::cout << TARGET_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy)
 : _gradeRequiredToSign(sign_minimal_grade_RRF), _gradeRequiredToExec(exec_minimal_grade_RRF)
{
    std::cout << COPY_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

    this->_target = to_copy._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << ROBOTOMYREQUESTFORM_MSG;

    if (this != &assign){
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

std::string RobotomyRequestForm::getTarget(){

    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    std::cout << "ROBOTOMY REQUEST FORM\n";
}



// ================================================================
//                  OTHER ROBOTOMYREQUESTFORM FUNCTIONS
// ================================================================

// ... other functions
