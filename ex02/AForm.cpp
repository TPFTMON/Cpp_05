#include "AForm.hpp"
#include "Bureaucrat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================
AForm::AForm()
 : _name("Some Unknown AForm"), _isSigned(false), _gradeRequiredToSign(minimal_grade), _gradeRequiredToExec(minimal_grade)
{
    std::cout << DEF_CONSTR_MSG << AFORM_MSG;

}

AForm::AForm(std::string name, int gradeRequiredToSign, int gradeRequiredToExec)
 : _name(name), _isSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExec(gradeRequiredToExec)
{
    std::cout << NAME_AND_GRADE_REQUIREMENTS_CONSTR_MSG << AFORM_MSG;

    if (this->_gradeRequiredToSign < maximal_grade || this->_gradeRequiredToExec < maximal_grade){
        throw AForm::GradeTooHighException();
    }

    if(this->_gradeRequiredToSign > minimal_grade || this->_gradeRequiredToExec > minimal_grade){
        throw AForm::GradeTooLowException();
    }
}


AForm::AForm(const AForm &to_copy)
 : _name(to_copy._name), _isSigned(false), _gradeRequiredToSign(to_copy._gradeRequiredToSign), _gradeRequiredToExec(to_copy._gradeRequiredToExec)
{
    std::cout << COPY_CONSTR_MSG << AFORM_MSG;
}

AForm& AForm::operator=(const AForm &assign){
    std::cout << COPY_ASSIGN_OP_MSG << AFORM_MSG;
    if (this != &assign){
        this->_isSigned = assign._isSigned;
    }
    return (*this);
}

AForm::~AForm(){
    std::cout << DESTR_MSG << AFORM_MSG;
}



// ================================================================
//                OTHER AFORM MEMBER FUNCTIONS
// ================================================================

std::string AForm::getName() const{

    return (this->_name);
}

bool        AForm::getIsSigned() const{

    return (this->_isSigned);
}

int         AForm::getRequiredGradeToSign() const{

    return (this->_gradeRequiredToSign);
}

int         AForm::getRequiredGradeToExec() const{

    return (this->_gradeRequiredToExec);
}


void        AForm::beSigned(const Bureaucrat& bureaucrat){

    if (bureaucrat.getGrade() > this->_gradeRequiredToSign){
        throw AForm::GradeTooLowException();
    }
    this->_isSigned = true;
}


void        AForm::execute(Bureaucrat const & executor) const{

    if (!this->_isSigned){
        throw AForm::FormNotSigned();
    }
    if(executor.getGrade() > this->_gradeRequiredToExec){
        throw AForm::GradeTooLowException();
    }

    this->executeForm();
}
// void        AForm::executeForm() const{

//     std::cout << "What are you doing here? This is basic AForm! Get out!\n";
// }


// ================================================================
//                      EXCEPTIONS FUNCTIONS
// ================================================================

const char* AForm::GradeTooHighException::what() const throw(){

    return ("the grade is too HIGH!");
}

const char* AForm::GradeTooLowException::what() const throw(){

    return ("the grade is too LOW!");
}

const char* AForm::FormNotSigned::what() const throw(){

    return ("the form is NOT signed!");
}

const char* AForm::FileOpenErrorException::what() const throw(){

    return ("the file was not opened!");
}


// ================================================================
//                  OTHER AFORM FUNCTIONS
// ================================================================

std::ostream& operator<<(std::ostream &os, const AForm &form){

    std::string is_signed;
    if (form.getIsSigned() == true){
        is_signed = "yes";
    }
    else{
        is_signed = "no";
    }

    os << "Form named " << form.getName() << ", info: Required Grade to be signed: {" << form.getRequiredGradeToSign() << "} | Required Grade to be executed: {" << form.getRequiredGradeToExec() << "} | Is this form signed? -> {" << is_signed << "}\n";
    return (os);
}
