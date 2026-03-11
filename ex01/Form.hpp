#ifndef FORM_HPP
# define FORM_HPP

// Includes:
# include <iostream>
# include <string>


// Messages:
# define FORM_MSG "\e[0;32mForm\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define NAME_AND_GRADE_REQUIREMENTS_CONSTR_MSG "\e[0;33mName with Grade Requirements Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Form;

# ifndef BUREAUCRAT
#  define BUREAUCRAT
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
# endif

class Form{

    static const int minimal_grade = 150;
    static const int maximal_grade = 1;

    private:
        const std::string _name;
        bool              _isSigned;
        const int         _gradeRequiredToSigh;
        const int         _gradeRequiredToExec;

    public:
        // Orthodox Canonical Form:
        Form();
        Form(std::string name, int gradeRequiredToSigh, int gradeRequiredToExec);
        Form(const Form &to_copy);
        Form& operator=(const Form &assign);
        ~Form();

        // Other member functions:
        std::string getName() const;
        bool        getIsSigned() const;
        int         getRequiredGradeToSign() const;
        int         getRequiredGradeToExec() const;
        void        beSigned(const Bureaucrat& bureaucrat);

        // Exceptions:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};


// Other:
std::ostream& operator<<( std::ostream &os, const Form &form);

#endif
