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



    try{
        int e = 0;
        Bureaucrat Kenny("Kenny", e);
    }
    catch (std::exception & e){
        Bureaucrat Kenny("Kenny", 1);
    }
    // Bureaucrat Bob("Bob", 160);



    // Bureaucrat Nigel("Nigel", 1);
    // Bureaucrat Victor("Victor", 150);
    // Nigel.incrementGrade();
    // Victor.decrementGrade();

    return (0);
}
