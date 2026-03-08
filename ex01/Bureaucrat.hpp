#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// includes:
# include <string>
# include <iostream>
# include <exception>

// Messages:
# define BUREAUCRAT_MSG "\e[0;32mBureaucrat\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define NAME_CONSTR_MSG "\e[0;33mName Constructor\e[0m called of "
# define NAME_GRADE_CONSTR_MSG "\e[0;33mName with Grade Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Form;

class Bureaucrat{

    static const int minimal_grade = 150;
    static const int maximal_grade = 1;

    private:
        const std::string _name;
        int               _grade;                // 1 <= _grade <= 150

    public:
        Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &to_copy);
        Bureaucrat& operator=(const Bureaucrat &assign);
        ~Bureaucrat();

        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
        void        signForm(Form &form);

        // exceptions:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

};

// Other Bureaucrat funstions:
std::ostream& operator<<( std::ostream &os, const Bureaucrat &bureaucrat);

#endif
