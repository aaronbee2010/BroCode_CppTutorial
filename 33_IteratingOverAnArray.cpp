#include <iostream>

int main() {
    /*
        33: Iterating over an array.
    */

    //
    int twenty[] = {24271, 16556, 17067, 9595, 20485, 9684, 5901, 9301, 23127, 11866, 28442, 9350, 2700, 3884, 1154, 24597, 26992, 6248, 20681, 23135};
        
    std::cout << "Element 1: " << twenty[0] << "\n";
    std::cout << "Element 2: " << twenty[1] << "\n";
    std::cout << "Element 3: " << twenty[2] << "\n";
    std::cout << "Element 4: " << twenty[3] << "\n";
    std::cout << "Element 5: " << twenty[4] << "\n";
    std::cout << "Element 6: " << twenty[5] << "\n";
    std::cout << "Element 7: " << twenty[6] << "\n";
    std::cout << "Element 8: " << twenty[7] << "\n";
    std::cout << "Element 9: " << twenty[8] << "\n";
    std::cout << "Element 10: " << twenty[9] << "\n";
    std::cout << "Element 11: " << twenty[10] << "\n";
    std::cout << "Element 12: " << twenty[11] << "\n";
    std::cout << "Element 13: " << twenty[12] << "\n";
    std::cout << "Element 14: " << twenty[13] << "\n";
    std::cout << "Element 15: " << twenty[14] << "\n";
    std::cout << "Element 16: " << twenty[15] << "\n";
    std::cout << "Element 17: " << twenty[16] << "\n";
    std::cout << "Element 18: " << twenty[17] << "\n";
    std::cout << "Element 19: " << twenty[18] << "\n";
    std::cout << "Element 20: " << twenty[19] << "\n";
    // Clearly, typing a line of code for each element is unnecessarily tedious.
    // A for loop can make this task much more pleasant.

    int size = sizeof(twenty) / sizeof(int); // This covers us if we need to add additional elements down the line.
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": " << twenty[i] << "\n";
    } // Much better, right?

    // Here's another (much simpler) example:
    std::string gen3ou[] = {"Tyranitar", "Skarmory", "Blissey", "Gengar", "Swampert"};
    int numMons = sizeof(gen3ou) / sizeof(gen3ou[0]);
    for (int i = 0; i < numMons; i++) {
        std::cout << "Element " << (i + 1) << ": " << gen3ou[i] << "\n";
    }




















    return 0;
}