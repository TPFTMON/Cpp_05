#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main(void){

    // OCF base for Bureaucrat:
    Bureaucrat B1;
    Bureaucrat B2("Jerry");
    B2.incrementGrade();
    Bureaucrat B3("Gerard", 10);
    Bureaucrat B4(B2);
    B4.incrementGrade();
    Bureaucrat B5("Ben");
    B5 = B4;
    B5.incrementGrade();

    std::cout << B1;
    std::cout << B2;
    std::cout << B3;
    std::cout << B4;
    std::cout << B5;



    // OCF base for Form:
    Form F1;
    Form F2("Not-Important", 140, 137);
    Form F3(F2);
    Form F4("Important", 20, 12);

    std::cout << F1;
    std::cout << F2;
    std::cout << F3;
    std::cout << F4;


    return (0);
}
