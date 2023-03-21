#include <iostream>
using namespace std;

int main() {
    /*
        17: While loops - runs a segment of code WHILE given condition is true and stops running segment when condition becomes false.
    */
    string name;
    
    // if (name.empty()) {
    //     cout << "Please enter your name: ";
    //     getline(cin, name);
    // }
    // cout << "You have specified your name as " << name << ".\n";

    // Normally, the program would terminate regardless of whether or not the user inputs a name. If we want the program to pause until
    // a name is given, we can use a while loop.
    while (name.empty()) {
        cout << "Please enter your name: ";
        getline(cin, name);
    }
    cout << "You have specified your name as " << name << ".\n";

    // If not careful, we can get stuck in an infinite while loop (where the given condition is always true can never become false)
    // while (true) {
    //     cout << "Oh dear. I appear to be trapped in an infinite while loop!\n";
    // }

    return 0;
}