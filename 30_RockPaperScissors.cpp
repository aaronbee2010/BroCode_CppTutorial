#include <iostream>
using namespace std;

int main() {

    srand(time(NULL));
    cout << "_______________________\n";
    cout << "| Rock Paper Scissors |\n";
    cout << "-----------------------\n\n";

    while (true) {
        char c;
        string result;

        cout << "Please pick one of the following options:\n\n";
        cout << "r (Rock)\n";
        cout << "p (Paper)\n";
        cout << "s (Scissors)\n";
        cout << "e (Exit the game)\n\n";

        cin >> c;

        c = tolower(c);

        string p1;
        p1 = c;

        if (p1 == "r") {
            cout << "You have picked Rock.\n";
        } else if (p1 == "p") {
            cout << "You have picked Paper.\n";
        } else if (p1 == "s") {
            cout << "You have picked Scissors.\n";
        } else if (p1 == "e") {
            cout << "Exiting...\n\n";       
            return 0;    
        } else {
            cout << "Invalid answer. Please try again.\n";
            continue;
        }

        int i = (rand() % 3) + 1;
        switch(i) {
            case 1:
                cout << "The CPU has picked Rock.\n";
                result = p1 + "r";
                break;
            case 2:
                cout << "The CPU has picked Paper.\n";
                result = p1 + "p";
                break;
            case 3:
                cout << "The CPU has picked Scissors.\n";
                result = p1 + "s";
                break;
        }

        if (result == "rs" || result == "pr" || result == "sp") {
            std::cout << "You win!\n\n";
        } else if (result == "rp" || result == "ps" || result == "sr") {
            std::cout << "You lose!\n\n";
        } else if (result == "rr" || result == "pp" || result == "ss") {
            std::cout << "You tie!\n\n";
        }
    }

    return 0;
}