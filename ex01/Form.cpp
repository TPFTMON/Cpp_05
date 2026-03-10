#include "Form.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Form::Form()
 : _name("Some Unknown Form"), _isSigned(false), _signRequiredGrade(minimal_grade), _execRequiredGrade(minimal_grade)
{
    std::cout << DEF_CONSTR_MSG << FORM_MSG;

}

Form::Form(std::string name, int gradeRequiredToSigh, int gradeRequiredToExec)
 : _name(name), _isSigned(false)
{
    std::cout << NAME_AND_GRADE_REQUIREMENTS_CONSTR_MSG << FORM_MSG;

    if (gradeRequiredToSigh < maximal_grade){ // 1
        throw Form::GradeTooHighException();
    }
    else if (gradeRequiredToSigh > minimal_grade){ // 150
        throw Form::GradeTooLowException();
    }
    this->_signRequiredGrade = gradeRequiredToSigh;
}


Form::Form(const Form &to_copy){
    std::cout << COPY_CONSTR_MSG << FORM_MSG;
    // ... copying
    // *this = to_copy; // Uncomment if assignment operator handles everything safely
}

Form& Form::operator=(const Form &assign){
    std::cout << COPY_ASSIGN_OP_MSG << FORM_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;
}

Form::~Form(){
    std::cout << DESTR_MSG << FORM_MSG;
}



// ================================================================
//                OTHER FORM MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER FORM FUNCTIONS
// ================================================================

// ... other functions
