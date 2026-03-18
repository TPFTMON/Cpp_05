#ifndef INTERN_HPP
# define INTERN_HPP

// Includes:
# include <iostream>
# include <string>

// Messages:
# define INTERN_MSG "\e[0;32mIntern\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class AForm;

class Intern{

    private:
        AForm   *makePresidentialPardon(std::string const &target) const;
        AForm   *makeRobotomyRequest(std::string const &target) const;
        AForm   *makeShrubberyCreation(std::string const &target) const;


    public:
        // Orthodox Canonical Form:
        Intern();
        Intern(const Intern &to_copy);
        Intern& operator=(const Intern &assign);
        ~Intern();

        // Other member functions:
        AForm   *makeForm(std::string formType, std::string target);

};


// Other:
// ...

#endif
