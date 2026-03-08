#include "Form.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Form::Form(){
    std::cout << DEF_CONSTR_MSG << FORM_MSG;
    
}

Form::Form(const Form &to_copy){
    std::cout << COPY_CONSTR_MSG << FORM_MSG;
    // ... copying
    // *this = to_copy; // Uncomment if assignment operator handles everything safely
}

Form& Form::operator=(const Form &assign){
    std::cout << COPY_ASSIGN_OP_MSG << FORM_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;
}

Form::~Form(){
    std::cout << DESTR_MSG << FORM_MSG;
}



// ================================================================
//                OTHER FORM MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER FORM FUNCTIONS
// ================================================================

// ... other functions
