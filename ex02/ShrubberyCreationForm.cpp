#include "ShrubberyCreationForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

ShrubberyCreationForm::ShrubberyCreationForm()
 : _target("NO_TARGET"), _gradeRequiredToSign(sign_minimal_grade_SCF), _gradeRequiredToExec(exec_minimal_grade_SCF)
{
    std::cout << DEF_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 : _target(target), _gradeRequiredToSign(sign_minimal_grade_SCF), _gradeRequiredToExec(exec_minimal_grade_SCF)
{
    std::cout << TARGET_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy)
 : _gradeRequiredToSign(sign_minimal_grade_SCF), _gradeRequiredToExec(exec_minimal_grade_SCF)
{
    std::cout << COPY_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

    this->_target = to_copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << SHRUBBERYCREATIONFORM_MSG;

    if (this != &assign){
        this->_target = assign._target;
    }
    return (*this);

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << DESTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}



// ================================================================
//                OTHER SHRUBBERYCREATIONFORM MEMBER FUNCTIONS
// ================================================================

std::string ShrubberyCreationForm::getTarget(){

    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::cout << "SHRUBBERY CREATION FORM\n";
}



// ================================================================
//                  OTHER SHRUBBERYCREATIONFORM FUNCTIONS
// ================================================================

// ... other functions
