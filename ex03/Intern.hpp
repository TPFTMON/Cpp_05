#ifndef INTERN_HPP
# define INTERN_HPP

// Includes:
# include <iostream>


// Messages:
# define INTERN_MSG "\e[0;32mIntern\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Intern{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        Intern();
        Intern(const Intern &to_copy);
        Intern& operator=(const Intern &assign);
        ~Intern();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
