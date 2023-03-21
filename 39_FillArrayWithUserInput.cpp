#include <iostream>

int main() {
    /*
        39: Fill an array with user input.
    */
    std::string foods[5] = {};
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ". Enter a food you like, or 'q' to quit: ";
        std::getline(std::cin >> std::ws, temp);
        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }

    std::cout << "\nYou like the following foods:\n";

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << "* " << foods[i] << "\n";
    }

    return 0;
}