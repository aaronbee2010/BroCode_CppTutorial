#include <iostream>

int main() {
    /*
        31: Arrays > A data structure that can hold multiple values. Values are accessed by an index number.
            You can think of it like a variable that holds multiple values, although in reality, arrays are 
            more complex than that (arrays are actually a type of data structure).
            
            Note that arrays have a fixed length (they are static).
    */

    // To create an array, prepend [] to your variable and enclose your value(s) in curly braces
    // Note that all elements in the array have to be of the type specified before the variable name
    std::string cars[] = {"Skyline", "Supra", "GTO"};
    std::cout << cars << "\n"; // Outputs the memory address (i.e. 0x7fffffffd850) where this array is located.

    // As with characters in a string, elements in an array can be accessed via their index.
    // Also like strings, array indexes start from zero.
    std::cout << cars[0] << "\n"; // Outputs "Skyline";
    std::cout << cars[1] << "\n"; // Outputs "Supra";
    std::cout << cars[2] << "\n"; // Outputs "GTO";

    // We can reassign the elements at a given position:
    cars[2] = "NSX";
    std::cout << cars[2] << "\n"; // Outputs "NSX";

    // If you don't know what values to include within the array straightaway, you can always declare an empty array and
    // add values later on in the code.
    //
    // As these are statically declared, you do need to state the length of an empty array, however.
    std::string cheese[3];
    cheese[0] = "Mozzarella";
    cheese[1] = "Edam";
    cheese[2] = "Halloumi";

    std::cout << cheese[0] << "\n"; // Outputs "Mozzarella";
    std::cout << cheese[1] << "\n"; // Outputs "Edam";
    std::cout << cheese[2] << "\n"; // Outputs "Halloumi";

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
}