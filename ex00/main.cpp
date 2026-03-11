#include "Bureaucrat.hpp"

int main(void){

    // OCF base:
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
    std::cout << B5 << '\n';



    // Tring/Catching exceptions for constructors
    try{
        Bureaucrat Kenny("Kenny", 0);
    }
    catch (std::exception& e){
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    try{
        Bureaucrat Bob("Bob", 160);
    }
    catch(const std::exception& e){
        std::cerr << "Exception caught: " << e.what() << '\n';
    }



    // Tring/Catching exceptions for increment/decrement
    Bureaucrat Nigel("Nigel", 1);
    try{
        Nigel.incrementGrade();
    }
    catch(const std::exception& e){
        std::cerr << "Exception caught: " << e.what();
    }
    std::cout << Nigel << '\n';

    Bureaucrat Victor("Victor", 150);
    try{
        Victor.decrementGrade();
    }
    catch(const std::exception& e){
        std::cerr << "Exception caught: " << e.what();
    }
    std::cout << Victor << '\n';



    return (0);
}
