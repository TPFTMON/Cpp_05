#ifndef AFORM_HPP
# define AFORM_HPP

// Includes:
# include <iostream>


// Messages:
# define AFORM_MSG "\e[0;32mAForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define NAME_AND_GRADE_REQUIREMENTS_CONSTR_MSG "\e[0;33mName with Grade Requirements Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Bureaucrat;

class AForm{

    static const int minimal_grade = 150;
    static const int maximal_grade = 1;

    private:
        const std::string _name;
        bool              _isSigned;
        const int         _gradeRequiredToSign;
        const int         _gradeRequiredToExec;


        public:
        AForm();
        AForm(std::string name, int gradeRequiredToSign, int gradeRequiredToExec);
        AForm(const AForm &to_copy);
        AForm& operator=(const AForm &assign);
        virtual ~AForm();

        // Other member functions:
        std::string  getName() const;
        bool         getIsSigned() const;
        int          getRequiredGradeToSign() const;
        int          getRequiredGradeToExec() const;
        void         beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const;
        virtual void executeForm() const = 0;

        // Exceptions:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class FormNotSigned : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class FileOpenErrorException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};


// Other:
std::ostream& operator<<(std::ostream &os, const AForm &form);

#endif
