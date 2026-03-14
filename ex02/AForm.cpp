#include "AForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

AForm::AForm(){
}

AForm::AForm(const AForm &to_copy){

    (void)to_copy;
}

AForm& AForm::operator=(const AForm &assign){

    (void)assign;
    return (*this);
}

AForm::~AForm(){
}



// ================================================================
//                OTHER AFORM MEMBER FUNCTIONS
// ================================================================

const char* AForm::GradeTooHighException::what() const throw(){

    // std::cout << "The grade is too HIGH!\n";
    return ("The grade is too HIGH!\n");
}

const char* AForm::GradeTooLowException::what() const throw(){

    // std::cout << "The grade is too LOW!\n";
    return ("The grade is too LOW!\n");
}



// ================================================================
//                  OTHER AFORM FUNCTIONS
// ================================================================

// ... other functions
