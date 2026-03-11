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
 : _name(name), _isSigned(false), _gradeRequiredToSigh(gradeRequiredToSigh), _gradeRequiredToExec(gradeRequiredToExec)
{
    std::cout << NAME_AND_GRADE_REQUIREMENTS_CONSTR_MSG << FORM_MSG;

    if (this->_gradeRequiredToSigh < maximal_grade){
        throw Form::GradeTooHighException();
    }
    else if(this->_gradeRequiredToSigh > minimal_grade){
        throw Form::GradeTooLowException();
    }

    if (this->_gradeRequiredToExec < maximal_grade){
        throw Form::GradeTooHighException();
    }
    else if (this->_gradeRequiredToExec > minimal_grade){
        throw Form::GradeTooLowException();
    }
}


Form::Form(const Form &to_copy)
 : _name(to_copy._name), _isSigned(false), _gradeRequiredToSigh(to_copy._gradeRequiredToSigh), _gradeRequiredToExec(to_copy._gradeRequiredToExec)
{
    std::cout << COPY_CONSTR_MSG << FORM_MSG;
}

Form& Form::operator=(const Form &assign){
    std::cout << COPY_ASSIGN_OP_MSG << FORM_MSG;
    if (this != &assign){
        this->_isSigned = assign._isSigned;
    }
    return (*this);
}

Form::~Form(){
    std::cout << DESTR_MSG << FORM_MSG;
}



// ================================================================
//                OTHER FORM MEMBER FUNCTIONS
// ================================================================

std::string Form::getName() const{

    return (this->_name);
}

bool        Form::getIsSigned() const{

    return (this->_isSigned);
}

int         Form::getRequiredGradeToSign() const{

    return (this->_gradeRequiredToSigh);
}

int         Form::getRequiredGradeToExec() const{

    return (this->_gradeRequiredToExec);
}


void        Form::beSigned(const Bureaucrat& bureaucrat){

    if (bureaucrat.getGrade() > this->_gradeRequiredToSigh){
        throw Form::GradeTooLowException();
    }
    else if (bureaucrat.getGrade() <= this->_gradeRequiredToSigh){
        this->_isSigned = true;
    }
}



// ================================================================
//                      EXCEPTIONS FUNCTIONS
// ================================================================

const char* Form::GradeTooHighException::what() const throw(){

    // std::cout << "The grade is too HIGH!\n";
    return ("The grade is too HIGH!\n");
}

const char* Form::GradeTooLowException::what() const throw(){

    // std::cout << "The grade is too LOW!\n";
    return ("The grade is too LOW!\n");
}



// ================================================================
//                  OTHER FORM FUNCTIONS
// ================================================================

std::ostream& operator<<( std::ostream &os, const Form &form){

    os << "Form named " << form.getName() << ": info: Required Grade to be signed: {" << form.getRequiredGradeToSign() << "}; Required Grade to be executed: {" << form.getRequiredGradeToExec() << "}; Is this form signed? -> {" << form.getIsSigned() << "}";
}
