#include <iostream>
#include <ctime>

int main() {
    /*
        24: Number guessing game
    */
    int num; // The target number the player tries to guess
    int guess; // The players current guess for a given try
    int tries; // The total number of attempts allowed.
    bool success = false;

    srand(time(NULL)); // In C++, NULL == 0, so time(0) and time(NULL) would be identical here.
    
    num = (rand() % 100) + 1; // The target number will be between 1 and 100 (inclusive).
    tries = 10; // We'll give the player 10 chances to guess the number correctly.

    int i = 1;
    while (i <= tries) {
        std::cout << "Please enter a number between 1 and 100: "; std::cin >> guess;
        if (guess == num) {
            success = true;
            break;
        } else if (guess > num) {
            std::cout << "Your guess is too high! Please try again.\n\n";
        } else if (guess < num) {
            std::cout << "Your guess is too low! Please try again.\n\n";
        } else {
            std::cout << "You did not input a valid number! Please try again.\n\n";
        }
        i++;
    }

    if (success == true) {
        std::cout << "Congratulations! You have guessed correctly after " << i << " guesses.\n\n";
    } else {
        std::cout << "Sorry! You have failed to guess the correct number after " << tries << " attempts. ";
        std::cout << "The correct number was " << num << ".\n\n";
    }

    return 0;
}