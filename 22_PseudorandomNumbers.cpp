#include <iostream>
#include <ctime>

int main() {
    /*
        22: Pseudo-random numbers (not truly random, but close)
    */

    srand(time(NULL)); // This line initialises the random number generator (rand()) used below
                       // The parameter taken by srand() is our "seed" (in this case, time(NULL))


    int roll1 = (rand() % 6) + 1; // 0 <= (rand() % 6) <= 5
                                 // Since we want to simulate single 6-sided-dice rolls, we add 1 to the result of rand % 6
    
    int roll2 = (rand() % 6) + 1;

    std::cout << "Dice roll 1: " << roll1 << "\n";
    std::cout << "Dice roll 2: " << roll2 << "\n";

    return 0;
}