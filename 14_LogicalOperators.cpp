#include <iostream>
using namespace std;

int main () {
    /*
        14 - Logical operators:

        && - Checks if both of the two conditions given are true
        || - Checks if at least one of the two conditions given are true
        !  - Reverses the logical state of the condition that follows it
    */
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;
    
    if (temp > 0 && temp < 30) { // Both of these conditions need to be true.
        cout << "The temperature is good!\n";
    } else {
        cout << "The temperature is bad!\n";
    }

    if (temp <= 0 || temp >= 30) { // At least one of these conditions needs to be true.
        cout << "The temperature is bad!\n";
    } else {
        cout << "The temperature is good!\n";
    }

    bool sunny = true;

    if (sunny) {
        cout << "The sky is sunny.\n";
    } else {
        cout << "The sky is not sunny.\n";
    }

    sunny = false;

    if (! sunny) {
        cout << "The sky is sunny.\n";
    } else {
        cout << "The sky is not sunny.\n";
    }

    return 0;
}

