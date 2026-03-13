#include "Intern.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Intern::Intern(){
    std::cout << DEF_CONSTR_MSG << INTERN_MSG;

}

Intern::Intern(const Intern &to_copy){
    std::cout << COPY_CONSTR_MSG << INTERN_MSG;
    // ... copying

}

Intern& Intern::operator=(const Intern &assign){
    std::cout << COPY_ASSIGN_OP_MSG << INTERN_MSG;
    if (this != &assign){
        // ... assigning
    }
    return *this;

}

Intern::~Intern(){
    std::cout << DESTR_MSG << INTERN_MSG;

}



// ================================================================
//                OTHER INTERN MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER INTERN FUNCTIONS
// ================================================================

// ... other functions
