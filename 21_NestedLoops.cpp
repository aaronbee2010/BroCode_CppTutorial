#include <iostream>

int main() {
    /*
        21: Nested loops.

        This term refers to a loop located within another loop. Simple enough, right?
    */
    for (int i = 1; i <= 3; i++) {
        std::cout << "Iteration " << i << ": ";
        for (int j = 1; j <= 10; j++) { // j is generally used as the index character of choice if i is not available.
            std::cout << j << ' ';
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    char symbol;
    int rows;
    int columns;

    std::cout << "Please enter a symbol you want to print across a grid: "; std::cin >> symbol;
    std::cout << "Please enter the number of rows you would like the grid to have: "; std::cin >> rows;
    std::cout << "Please enter the number of columns you would like the grid to have: "; std::cin >> columns; std::cout << "\n";

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << symbol << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    return 0;
}