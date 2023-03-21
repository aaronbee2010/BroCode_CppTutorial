#include <iostream>

void smashMouth() {
    std::cout << "Somebody once told me the world was gonna roll me,\n";
    std::cout << "I ain't the sharpest tool in the shed.\n";
    std::cout << "She was looking kinda dumb with her finger and her thumb,\n";
    std::cout << "In the shape of an L on her forehead.\n\n";
}

void rickRoll(std::string legend, int number);
// If a UDF is defined before the main function (where the UDF would be called) then this would give an
// error as the UDF isn't defined in the source file until after the main function.
//
// We can remedy this by declaring the UDF before the main() function, letting us define the UDF after the main() function.

int main() {
    /*
        25: User-defined functions (UDFs)

        A function is a block of reusable code.
    */
    rickRoll("Aaron", 69);
    smashMouth();
    rickRoll("Aaron", 420);

    return 0;
}

void rickRoll(std::string legend, int number) {
    std::cout << "We're no strangers to love.\n";
    std::cout << "You know the rules and so do I.\n";
    std::cout << "A full commitment's what I'm thinking of.\n";
    std::cout << "You wouldn't get this from any other guy.\n";
    
    std::cout << legend << " is based fr no cap #" << number << "\n\n";
}