#include <iostream>
using namespace std;

int main() {
    /*
        11 - Switches

        An alternative to using multiple "else if" statements.
    */

    // Observe the "else if" statements below.

    // int day_number;
    // cout << "Please enter a number representing the day of the week (1-7): ";
    // cin >> day_number;

    // if (day_number == 1) {
    //     cout << "The day of the week is Monday.\n";
    // } else if (day_number == 2) {
    //     cout << "The day of the week is Tuesday.\n";
    // } else if (day_number == 3) {
    //     cout << "The day of the week is Wednesday.\n";
    // } else if (day_number == 4) {
    //     cout << "The day of the week is Thursday.\n";
    // } else if (day_number == 5) {
    //     cout << "The day of the week is Friday.\n";
    // } else if (day_number == 6) {
    //     cout << "The day of the week is Saturday.\n";
    // } else if (day_number == 7) {
    //     cout << "The day of the week is Sunday.\n";
    // } else {
    //     cout << "You have entered an invalid number.\n";
    // }

    // There's a lot of typing to be done here. Could there possibly be a way
    // to represent the same functionality with less typing? Yes we can, thanks
    // to the "switch()" statement!

    int day_number;
    cout << "Please enter a number representing the day of the week (1-7): ";
    cin >> day_number;

    switch (day_number) {
        case 1:
            cout << "The day of the week is Monday.\n";
            break;
        case 2:
            cout << "The day of the week is Tuesday.\n";
            break;
        case 3:
            cout << "The day of the week is Wednesday.\n";
            break;
        case 4:
            cout << "The day of the week is Thursday.\n";
            break;
        case 5:
            cout << "The day of the week is Friday.\n";
            break;
        case 6:
            cout << "The day of the week is Saturday.\n";
            break;
        case 7:
            cout << "The day of the week is Sunday.\n";
            break;
        default:
            cout << "You have entered an invalid number. Please try again and enter a number between 1 & 7.\n";
    }

    return 0;
}