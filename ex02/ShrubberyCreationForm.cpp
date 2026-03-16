#include "ShrubberyCreationForm.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

ShrubberyCreationForm::ShrubberyCreationForm()
 : AForm("Shrubbery Creation", sign_minimal_grade_SCF, exec_minimal_grade_SCF), _target("NO_TARGET")
{
    std::cout << DEF_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 : AForm("Shrubbery Creation", sign_minimal_grade_SCF, exec_minimal_grade_SCF), _target(target)
{
    std::cout << TARGET_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy)

 : AForm(to_copy)
{
    std::cout << COPY_CONSTR_MSG << SHRUBBERYCREATIONFORM_MSG;

    this->_target = to_copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){

    std::cout << COPY_ASSIGN_OP_MSG << SHRUBBERYCREATIONFORM_MSG;

    if (this != &assign){
        this->_target = assign._target;
    }
    return (*this);

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << DESTR_MSG << SHRUBBERYCREATIONFORM_MSG;

}



// ================================================================
//                OTHER SHRUBBERYCREATIONFORM MEMBER FUNCTIONS
// ================================================================

std::string ShrubberyCreationForm::getTarget() const{

    return (this->_target);
}

void        ShrubberyCreationForm::executeForm() const{

    std::string filename = this->getTarget() + "_shrubbery";

    // Checking for existing file (I don't want to override stuff)
    // We try to open for reading. If successful, it exists.
    std::ifstream checkFile(filename.c_str());
    if (checkFile.is_open()){
        checkFile.close();
        std::cout << "Planting aborted: File '" << filename << "' already exists.\n";
        return ;
    }

    std::ofstream ofshrubbery(filename.c_str());

    if (!ofshrubbery.is_open()){
        throw AForm::FileOpenErrorException();
    }

    srand(time(0));
    bool success = rand() % 2;

    if (success == false){
        ofshrubbery << "            .        +          .      .          ." << "\n";
        ofshrubbery << "     .            _        .                    ." << "\n";
        ofshrubbery << "  ,              /;-._,-.____        ,-----.__" << "\n";
        ofshrubbery << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << "\n";
        ofshrubbery << "  `                 \\   _|`\"=:_::.`.();  \\ __/ /" << "\n";
        ofshrubbery << "                      ,    `./  \\:. `.   ()==-\'  ." << "\n";
        ofshrubbery << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << "\n";
        ofshrubbery << ".           \\/:/`-\' , ,\\ \'` ` `   (): , /_  -o" << "\n";
        ofshrubbery << "       .    /:+- - + +- : :- + + -:\'  /(o-() \\()     ." << "\n";
        ofshrubbery << "  .      ,=\':  \\    ` `/` \' , , ,:\' `\'--\".--\"---._/`7" << "\n";
        ofshrubbery << "   `.   (    \\: \\,-._` ` + \'\\, ,\"   _,--._,---\":.__/" << "\n";
        ofshrubbery << "              \\:  `  X` _| _,\\/\'   .-\'" << "\n";
        ofshrubbery << ".               \":._:`\\____  /:\'  /      .           ." << "\n";
        ofshrubbery << "                    \\::.  :\\/:\'  /              +" << "\n";
        ofshrubbery << "   .                 `.:.  /:\'  {}      ." << "\n";
        ofshrubbery << "           .           ():_():;   \\           ." << "\n";
        ofshrubbery << "                      /:. _/ ,  |" << "\n";
        ofshrubbery << "                   . (|::.     ,`                  ." << "\n";
        ofshrubbery << "     .                |::.    {}\\" << "\n";
        ofshrubbery << "                      |::.\\  \\ `." << "\n";
        ofshrubbery << "                      |:::()\\    |" << "\n";
        ofshrubbery << "              O       |:::/{ }  |                  (o" << "\n";
        ofshrubbery << "               ()  ___/#\\::`/ (O \"==._____   O, (O  /`" << "\n";
        ofshrubbery << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << "\n";
        ofshrubbery << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << "\n";
    }
    else {
        ofshrubbery << "                                                             ." << "\n";
        ofshrubbery << "                                              .         ;" << "\n";
        ofshrubbery << "                 .              .              ;%     ;;" << "\n";
        ofshrubbery << "                   ,           ,                :;%  %;" << "\n";
        ofshrubbery << "                    :         ;                   :;%;'     .," << "\n";
        ofshrubbery << "           ,.        %;     %;            ;        %;'    ,;" << "\n";
        ofshrubbery << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << "\n";
        ofshrubbery << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << "\n";
        ofshrubbery << "               ;%;      %;        ;%;        % ;%;  ,%;'" << "\n";
        ofshrubbery << "                `%;.     ;%;     %;'         `;%%;.%;'" << "\n";
        ofshrubbery << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << "\n";
        ofshrubbery << "                    `:%;.  :;bd%;          %;@%;'" << "\n";
        ofshrubbery << "                      `@%:.  :;%.         ;@@%;'" << "\n";
        ofshrubbery << "                        `@%.  `;@%.      ;@@%;" << "\n";
        ofshrubbery << "                          `@%%. `@%%    ;@@%;" << "\n";
        ofshrubbery << "                            ;@%. :@%%  %@@%;" << "\n";
        ofshrubbery << "                              %@bd%%%bd%%:;" << "\n";
        ofshrubbery << "                                #@%%%%%:;;" << "\n";
        ofshrubbery << "                                %@@%%%::;" << "\n";
        ofshrubbery << "                                %@@@%(o);  . '" << "\n";
        ofshrubbery << "                                %@@@o%;:(.,'" << "\n";
        ofshrubbery << "                            `.. %@@@o%::;" << "\n";
        ofshrubbery << "                               `)@@@o%::;" << "\n";
        ofshrubbery << "                                %@@(o)::;" << "\n";
        ofshrubbery << "                               .%@@@@%::;" << "\n";
        ofshrubbery << "                               ;%@@@@%::;." << "\n";
        ofshrubbery << "                              ;%@@@@%%:;;;." << "\n";
        ofshrubbery << "                          ...;%@@@@@%%:;;;;,.." << "\n";
    }

    ofshrubbery.close();
    std::cout << "Shrubbery has been planted in " << filename << "\n";
}



// ================================================================
//                  OTHER SHRUBBERYCREATIONFORM FUNCTIONS
// ================================================================

std::ostream& operator<<(std::ostream &os, const ShrubberyCreationForm &form){

    std::string is_signed;
    if (form.getIsSigned() == true){
        is_signed = "yes";
    }
    else{
        is_signed = "no";
    }

    os << "Form named " << form.getName() << ", info: Required Grade to be signed: {" << form.getRequiredGradeToSign() << "} | Required Grade to be executed: {" << form.getRequiredGradeToExec() << "} | Is this form signed? -> {" << is_signed << "} | Form's target: {" << form.getTarget() << "}\n";
    return (os);
}
