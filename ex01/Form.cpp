#include "Form.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Form::Form()
 : _name("Some Unknown Form"), _isSigned(false), _gradeRequiredToSigh(minimal_grade), _gradeRequiredToExec(minimal_grade)
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
    this->_gradeRequiredToSigh = gradeRequiredToSigh; // ? How then to assign a special value if I need to check whether the value is correct (1 < v < 150) ?

    if (gradeRequiredToExec < maximal_grade){ // 1
        throw Form::GradeTooHighException();
    }
    else if (gradeRequiredToExec > minimal_grade){ // 150
        throw Form::GradeTooLowException();
    }
    this->_gradeRequiredToExec = gradeRequiredToExec;
}


Form::Form(const Form &to_copy){
    std::cout << COPY_CONSTR_MSG << FORM_MSG;
    // ... copying
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

void beSigned(const Bureaucrat& Bureaucrat){

}
// ... other members



// ================================================================
//                  OTHER FORM FUNCTIONS
// ================================================================

std::ostream& operator<<( std::ostream &os, const Form &form){

    os <<
}
// ... other functions
