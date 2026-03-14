#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

// Includes:
# include <iostream>
# include "string"
# include "AForm.hpp"


// Messages:
# define SHRUBBERYCREATIONFORM_MSG "\e[0;32mShrubberyCreationForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define TARGET_CONSTR_MSG "\e[0;33mTarget Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class ShrubberyCreationForm : public AForm{

    static const int sign_minimal_grade_SCF = 145;
    static const int exec_minimal_grade_SCF = 137;

    private:
        std::string       _target;

    public:
        // Orthodox Canonical Form:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &to_copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &assign);
        ~ShrubberyCreationForm();

        // Other member functions:
        std::string getTarget();
        void        executeForm() const;

};


// Other:
// ...

#endif
