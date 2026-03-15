#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

// Includes:
# include <iostream>
# include <string>
# include "AForm.hpp"


// Messages:
# define PRESIDENTIALPARDONFORM_MSG "\e[0;32mPresidentialPardonForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define TARGET_CONSTR_MSG "\e[0;33mTarget Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class PresidentialPardonForm : public AForm{

    static const int sign_minimal_grade_PPF = 25;
    static const int exec_minimal_grade_PPF = 5;

    private:
        std::string       _target;

    public:
        // Orthodox Canonical Form:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &to_copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &assign);
        ~PresidentialPardonForm();

        // Other member functions:
        std::string getTarget() const;
        void        executeForm() const;

};


// Other:
std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &form);

#endif
