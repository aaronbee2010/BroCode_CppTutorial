#include <iostream>
#include <ctime>

int main() {
    /*
        23: Random Event Generator
    */
    srand( time(0) );
    int randNum = (rand() % 5) + 1; // Generates a random number between 1 and 6 (inclusive).

    switch(randNum) {
        case 1:
            std::cout << "You win a Juggernog mini fridge!\n";
            break; // These break statements take us out of the switch statement so only one prize can be won.
        case 2:
            std::cout << "You win a Xbox Series X!\n";
            break;
        case 3:
            std::cout << "You win a RTX 4080!\n";
            break;
        case 4:
            std::cout << "You win a Logitech G Pro Wireless Superlight!\n";
            break;
        case 5:
            std::cout << "You win a Razer Huntsman Mini!\n";
            break;
        case 6:
            std::cout << "You win a SteelSeries Arctis 7 wireless headset!\n";
            break;
    }

    return 0;
}