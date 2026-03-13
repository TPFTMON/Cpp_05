#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

// Includes:
# include <iostream>


// Messages:
# define PRESIDENTIALPARDONFORM_MSG "\e[0;32mPresidentialPardonForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class PresidentialPardonForm{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &to_copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &assign);
        ~PresidentialPardonForm();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
