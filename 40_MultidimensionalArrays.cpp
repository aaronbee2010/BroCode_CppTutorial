#include <iostream>

int main() {
    /*
        40: Multidimensional Arrays

        In this exercise, we'll be looking at 2D arrays specifically. These are particularly useful because
        they can represent a grid/matrix of data with rows and columns.
    */

    // For 2D arrays, we need two pairs of square brackets.
    // The first pair is for the number of rows and the second pair is for the number of columns.
    //
    // When you're assigning values to your array (not defining an empty array), you don't
    //  need to specify the number of rows however you must specify the number of columns.
    std::string cars[][3] = {{"Fiesta", "Focus", "Mondeo"},
                            {"Corsa", "Astra", "Insignia"},
                            {"Polo", "Golf", "Passat"}}; // Don't forget the external braces as well!

    std::cout << cars[0][0] << " " << cars[0][1] << " " << cars[0][2] << "\n";
    std::cout << cars[1][0] << " " << cars[1][1] << " " << cars[1][2] << "\n";
    std::cout << cars[2][0] << " " << cars[2][1] << " " << cars[2][2] << "\n\n";

    // Rather than type out all of the above just to print the elements, we can use nested for loops:
    
    // <no. of bytes in whole array> / <no. of bytes in one row>
    int rows = sizeof(cars) / sizeof(cars[0]);
    // <no. of bytes in one row> / <no. of bytes in one element in one row>
    int columns = sizeof(cars[0]) / sizeof(std::string);
    // int columns = sizeof(cars[0]) / sizeof(cars[0][0]); // Same as row directly above this one.
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // If we just want to look at the memory addresses where each row is located in memory,
    // we can just do this:

    for (int i = 0; i < rows; i++) {
        std::cout << "Row " << i + 1 << " memory address: " << cars[i] << "\n";
    }
    std::cout << "\n";
    // https://www.rapidtables.com/convert/number/hex-to-decimal.html
    //
    // Looking at the memory addresses printed for each row, after converting from
    // hexadecimal to decimal then subtracing the address number of one row from the
    // row above it, you will notice that these addresses are 96 bytes apart.
    //
    // This makes sense because each element in a row is a string and so is 32 bytes
    // long, and there are three elements per row, so each row would be 96 bytes long.
    //
    // This also means  that these rows are located right next to each other in memory.
    // In other words, the first element of a row is directly adjacent to the last element
    // of the previous row in memory - there are no gaps in memory between adjacent rows.

    return 0;
}