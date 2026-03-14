#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

// Includes:
# include <iostream>
# include "string"
# include "AForm.hpp"


// Messages:
# define ROBOTOMYREQUESTFORM_MSG "\e[0;32mRobotomyRequestForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define TARGET_CONSTR_MSG "\e[0;33mTarget Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class RobotomyRequestForm : public AForm{

    static const int sign_minimal_grade_RRF = 72;
    static const int exec_minimal_grade_RRF = 45;

    private:
        std::string       _target;

    public:
        // Orthodox Canonical Form:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &to_copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &assign);
        ~RobotomyRequestForm();

        // Other member functions:
        std::string getTarget();
        void        executeForm() const;
};



// Other:
// ...

#endif
