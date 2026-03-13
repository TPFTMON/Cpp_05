#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main(void){

    // OCF base for Bureaucrat:
    // Bureaucrat B1;
    // Bureaucrat B2("Jerry");
    // B2.incrementGrade();
    // Bureaucrat B3("Gerard", 10);
    // Bureaucrat B4(B2);
    // B4.incrementGrade();
    // Bureaucrat B5("Ben");
    // B5 = B4;
    // B5.incrementGrade();

    // std::cout << B1;
    // std::cout << B2;
    // std::cout << B3;
    // std::cout << B4;
    // std::cout << B5 << "\n";



    // // OCF base for Form:
    // Form F1;
    // Form F2("Not-Important", 140, 137);
    // Form F3(F2);
    // Form F4("Important", 20, 12);

    // std::cout << F1;
    // std::cout << F2;
    // std::cout << F3;
    // std::cout << F4 << "\n";


    // // Constructor exceptions:
    // try{
    //     Form Form1("Cool One", 0, 30);
    // }
    // catch (std::exception& e){
    //     std::cerr << "1. Exception caught: " << e.what() << '\n';
    // }
    // try{
    //     Form Form1("Cool One", 30, 0);
    // }
    // catch (std::exception& e){
    //     std::cerr << "2. Exception caught: " << e.what() << '\n';
    // }
    // try{
    //     Form Form1("Cool One", 151, 30);
    // }
    // catch (std::exception& e){
    //     std::cerr << "3. Exception caught: " << e.what() << '\n';
    // }
    // try{
    //     Form Form1("Cool One", 30, 151);
    // }
    // catch (std::exception& e){
    //     std::cerr << "4. Exception caught: " << e.what() << "\n\n";
    // }


    // // beSigned exceptions:
    // Form Form2("Big One", 50, 45);
    // Bureaucrat Ben("Ben", 100);
    // try{
    //     Form2.beSigned(Ben);  ////////////// Understand what to do with this one //////////////
    // }
    // catch (std::exception& e){
    //     std::cerr << "5. Exception caught: " << e.what() << "\n\n";
    // }


    // // signForm tests:
    // std::cout << Form2;
    // try{
    //     Ben.signForm(Form2);
    // }
    // catch (std::exception& e){
    //     std::cerr << "6. Exception caught: " << e.what() << "\n";
    // }
    // Bureaucrat Gerard("Gerard", 10);
    // Gerard.signForm(Form2);
    // std::cout << Form2 << "\n";


    return (0);
}
