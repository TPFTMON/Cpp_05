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

std::string RobotomyRequestForm::getTarget(){

    return (this->_target);
}

void RobotomyRequestForm::executeForm() const{
    std::cout << "ROBOTOMY REQUEST FORM\n";
}



// ================================================================
//                  OTHER ROBOTOMYREQUESTFORM FUNCTIONS
// ================================================================

// ... other functions
