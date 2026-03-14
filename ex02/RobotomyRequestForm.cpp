#include "RobotomyRequestForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

RobotomyRequestForm::RobotomyRequestForm(){
    std::cout << DEF_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target){
    std::cout << TARGET_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy){
    std::cout << COPY_CONSTR_MSG << ROBOTOMYREQUESTFORM_MSG;
    // ... copying

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &assign){
    std::cout << COPY_ASSIGN_OP_MSG << ROBOTOMYREQUESTFORM_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;

}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << DESTR_MSG << ROBOTOMYREQUESTFORM_MSG;

}



// ================================================================
//                OTHER ROBOTOMYREQUESTFORM MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER ROBOTOMYREQUESTFORM FUNCTIONS
// ================================================================

// ... other functions
