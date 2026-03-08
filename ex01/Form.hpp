#ifndef FORM_HPP
# define FORM_HPP

// Includes:
# include <iostream>
# include <string>


// Messages:
# define FORM_MSG "\e[0;32mForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Bureaucrat;

class Form{

    private:
        // ... some private stuff
        const std::string _name;
        bool              _isSigned;
        const int         _signRequiredGrade;
        const int         _execRequiredGrade;

    public:
        // Orthodox Canonical Form:
        Form();
        Form(const Form &to_copy);
        Form& operator=(const Form &assign);
        ~Form();

        // Other member functions:
        // ... some members
        void beSigned(const Bureaucrat& Bureaucrat);

};


// Other:
// ...

#endif
