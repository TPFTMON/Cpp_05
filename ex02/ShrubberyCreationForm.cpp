#include "ShrubberyCreationForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

ShrubberyCreationForm::ShrubberyCreationForm()
 : AForm("ShrubberyCreationForm", sign_minimal_grade_SCF, exec_minimal_grade_SCF), _target("NO_TARGET")
{
    std::cout << DEF_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 : AForm("ShrubberyCreationForm", sign_minimal_grade_SCF, exec_minimal_grade_SCF), _target(target)
{
    std::cout << TARGET_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy)

 : AForm(to_copy)
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

void        ShrubberyCreationForm::executeForm() const{

    std::cout << "SHRUBBERY CREATION FORM\n";
}



// ================================================================
//                  OTHER SHRUBBERYCREATIONFORM FUNCTIONS
// ================================================================

// ... other functions
