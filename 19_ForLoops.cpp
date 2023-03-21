#include <iostream>
using namespace std;

int main() {
    /*
        19: For loops.

        for (initial index value; index condition; index modification after each iteration of indented code) {
            <code>;
        }
    */
   
    // int i = 1;
    // while (i <= 3) {
    //     cout << "This sentence will be shown 3 times.\n";
    //     i++;
    // }

    // Rather than use the while loop above, we can avoid declaring a variable unnecessarily and use a for loop instead:
    for (int i = 1; i <= 3; i++) {
        cout << "This sentence will be shown 3 times.\n";
    }

    cout << "Takeoff in ";
    for (int i = 5; i != 0; i--) {
        cout << i << "\n";
    }
    cout << "Takeoff!\n";
    // cout << i; // Here the i variable (we're using i for index here) can be used within the for loop, but not outside of it!

    return 0;
}