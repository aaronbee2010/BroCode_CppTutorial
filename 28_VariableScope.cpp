#include <iostream>

int myNum = 1; // This is a global variable as it was declared outside of any functions or curly braces.
               // If we were to comment out the other two variables named "myNum" then this would be used.
               //
               // The main() function and the printNum() UDF are therefore both in the scope of this
               // global variable.

// NOTE: It's best to avoid global variables if you can because it pollutes the global namespace.
//
//       Also, variables declared within a function are more secure because functions can't
//       see inside of other functions.

void printNum();

int main() {
    /*
        28: Variable scope

        Local variables  --> declared inside a function or block of curly braces <-- {}
        Global variables --> declared outside of all functions
    */

    int myNum = 2; // Local variable declared within main() function

    printNum();

    return 0;
}

// void printNum() {               // Here, the VSCode linter shows us that this instance of myNum is undefined.
//     std::cout << myNum << "\n"; // We defined myNum=1 within the main() function, so it's scope is only within
// }                               // that function and not this one.
                       
void printNum() {
    int myNum = 3; // We're allowed to assign this variable a name already in use by another variable as long
    std::cout << myNum << "\n"; // as all variables with this name are in different scopes to each other.

    // If we had both local and global variables in use, the local variable would normally take precedence
    // over the global one. We can override this with by prepending :: to the variable being evaluated.
    //
    // The :: is known as the "scope resolution operator".

    std::cout << ::myNum << "\n"; // Here, the :: tells the compiler to use the global variable here
                                  // instead of the local one within this UDF.
}