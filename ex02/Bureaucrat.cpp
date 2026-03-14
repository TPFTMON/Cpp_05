#include "Bureaucrat.hpp"

// ================================================================
//                  ORTHODOX CANONICAL FORM BASE
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
 : _name(name)
{
    std::cout << NAME_GRADE_CONSTR_MSG << BUREAUCRAT_MSG;

    if (grade < maximal_grade){ // 1
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > minimal_grade){ // 150
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy)
 : _name(to_copy._name), _grade(to_copy._grade)
{
    std::cout << COPY_CONSTR_MSG << BUREAUCRAT_MSG;

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &assign){
    std::cout << COPY_ASSIGN_OP_MSG << BUREAUCRAT_MSG;

    if (this != &assign){
        this->_grade = assign._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << DESTR_MSG << BUREAUCRAT_MSG;

}



// ================================================================
//               OTHER BUREAUCRAT MEMBER FUNCTIONS
// ================================================================

std::string Bureaucrat::getName() const{

    return (this->_name);
}

int         Bureaucrat::getGrade() const{

    return (this->_grade);
}

void        Bureaucrat::incrementGrade(){

    if (this->_grade - 1 < maximal_grade){
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
}

void        Bureaucrat::decrementGrade(){

    if (this->_grade + 1 > minimal_grade){
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
}

void        Bureaucrat::signForm(AForm &form){
    (void)form;
    // if (form.beSigned(*this) == true){
    //     std::cout << "Bureaucrat " << this->getName() << " signed form " << form.getName() << '\n';
    // }
    // else{
    //     std::cout << "Bureaucrat " << this->getName() << " couldn’t sign " << form.getName() << " because their grade is too low.";
    // }
}



// ================================================================
//                      EXCEPTIONS FUNCTIONS
// ================================================================

const char* Bureaucrat::GradeTooHighException::what() const throw(){

    // std::cout << "The grade is too HIGH!\n";
    return ("The grade is too HIGH!\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){

    // std::cout << "The grade is too LOW!\n";
    return ("The grade is too LOW!\n");
}



// ================================================================
//                  OTHER BUREAUCRAT FUNCTIONS
// ================================================================

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat){

    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
    return (os);
}
