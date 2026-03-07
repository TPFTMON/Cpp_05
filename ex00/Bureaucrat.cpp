#include "Bureaucrat.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Bureaucrat::Bureaucrat()
 : _name("Nameless Bureaucrat"), _grade(minimal_grade)
{
    std::cout << DEF_CONSTR_MSG << BUREAUCRAT_MSG;

}

Bureaucrat::Bureaucrat(const std::string name)
 : _name(name), _grade(minimal_grade)
{
    std::cout << NAME_CONSTR_MSG << BUREAUCRAT_MSG;

}

Bureaucrat::Bureaucrat(const std::string name, int grade)
 : _name(name), _grade(grade)
{
    std::cout << NAME_GRADE_CONSTR_MSG << BUREAUCRAT_MSG;

}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy){
    std::cout << COPY_CONSTR_MSG << BUREAUCRAT_MSG;

    // this->_name = to_copy._name;
    this->_grade = to_copy._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &assign){
    std::cout << COPY_ASSIGN_OP_MSG << BUREAUCRAT_MSG;

    if (this != &assign){
        // this->_name = assign._name;
        this->_grade = assign._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << DESTR_MSG << BUREAUCRAT_MSG;

}



// ================================================================
//                  OTHER BUREAUCRAT FUNCTION
// ================================================================

std::string Bureaucrat::getName() const{

    return (this->_name);
}

int         Bureaucrat::getGrade() const{

    return (this->_grade);
}

void        Bureaucrat::incrementGrade(){

}

void        Bureaucrat::decrementGrade(){

}
