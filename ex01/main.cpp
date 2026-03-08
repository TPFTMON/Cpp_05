#include "Bureaucrat.hpp"

int main(void){

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





    return (0);
}
