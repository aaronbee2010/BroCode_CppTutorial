#include <iostream>
using namespace std;

int main() {
    /*
        18: Do while loops: Do some block of code first then repeat again IF condition is true.

        do {
            <code>;
        } while <condition>;

        The difference between this and a normal while loop is that the indented
        code will run ONCE before the condition is evaluated for the first time.
    */
    int number; 
    
    // number = 0; // We have to assign a value of 0 before the while loop otherwise this variable will have a value of
    //             // 32767, which would skip the while loop below. Note that 32767 is the highest 16-bit signed integer.
    // while (number < 1) {
    //     cout << "Please enter a positive integer: "; cin >> number;
    // }
    // cout << "You have entered: " << number << "\n";

    /* 
        One way we can avoid having to assign an initial value of 0 is by using a "do while" loop.

        This lets us execute the code despite having an initial value of 32767. The condition would then
        be evaluated AFTER the user has inputted a new value for our variable.
    */
    do {
        cout << "Please enter a positive integer: "; cin >> number;
    } while (number < 1);
    cout << "You have entered: " << number << "\n";

    return 0;
}