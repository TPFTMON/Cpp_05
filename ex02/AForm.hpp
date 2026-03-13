#ifndef AFORM_HPP
# define AFORM_HPP

// Includes:
# include <iostream>


// Messages:
# define AFORM_MSG "\e[0;32mAForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class AForm{

    private:
        const std::string _name;
        bool              _isSigned;
        const int         _gradeRequiredToSigh;
        const int         _gradeRequiredToExec;

    public:
        virtual ~AForm();

        // Other member functions:
        // ... some members
        virtual void execute(Bureaucrat const & executor) const = 0;

};


// Other:
// ...

#endif
