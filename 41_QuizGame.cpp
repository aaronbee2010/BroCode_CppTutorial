#include <iostream>

/*
    41: Quiz game (multiple choice)
*/

int main() {

    std::string questions[] = {"1. What year was C++ created?",
                               "2. Who invented C++?",
                               "3. What is the predecessor of C++?",
                               "4. Is the Earth flat?"};
    int size = sizeof(questions) / sizeof(std::string);
    std::string options[][4] = {{"a. 1969", "b. 1975", "c. 1985", "d. 1989"},
                                {"a. Guido van Rossum", "b. Bjarne Stroustrup", "c. John Carmack", "d. Mark Zuckerberg"},
                                {"a. C", "b. C+", "c. C--", "d. B++"},
                                {"a. Yes", "b. No", "c. Sometimes", "d. What is an Earth?"}};
    char answerKey[] = {'c', 'b', 'a', 'b'};
    char guess;
    int score = 0;
    std::string endMessage;

    std::cout << "Welcome to Aarons quiz game! Press 'e' or 'E' to exit at any time.\n\n";
    
    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << "\n";

        for (std::string option : options[i]) {
            std::cout << option << "\n";
        }

        std::cout << "\n";

        std::cin >> guess;
        guess = tolower(guess);

        if (guess == 'e') {
            std::cout << "Exiting...\n";
            return 0;
        } else if (guess == answerKey[i]) {
            std::cout << "Correct!\n";
            score++;
        } else if (guess == 'a' | guess == 'b' | guess == 'c' | guess == 'd') {
            std::cout << "Wrong! The correct answer was " << answerKey[i] << "!\n";
        } else {
            std::cout << "Invalid answer. Please try again.\n";
            i--;
        }
    }

    switch (score) {
        case 0:
            endMessage = "You got no answers correct! Better luck next time!";
            break;
        case 1:
            endMessage = "You got 1 answer correct! Better luck next time!";
            break;
        case 2:
            endMessage = "You got 2 answers correct! Not bad!";
            break;
        case 3:
            endMessage = "You got 3 answers correct! Good job!";
            break;
        case 4:
            endMessage = "You got 4 answers correct! Amazing!";
            break;
    }

    std::cout << endMessage << "\n\n";

    return 0;
}