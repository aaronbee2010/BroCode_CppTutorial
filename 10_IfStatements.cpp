#include <iostream>
using namespace std;

int main() {
    /*
        if Statements - do something if condition is true, otherwise do something else if it's false.
    */
    int age;

    cout << "Please enter your age: ";
    cin >> age;
    
    if (age < 18) {
        cout << "\nYou are too young to purchase a can of Red Bull.\n\n";
    } else if (age >= 65) {
        cout << "\nYou are too old to purchase a can of Red Bull.\n\n";
    } else {
        cout << "\nYou may purchase a can of Red Bull.\n\n";
    }
    
    return 0;
}