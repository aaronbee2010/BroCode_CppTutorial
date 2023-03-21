#include <iostream>
using namespace std;

int main() {
    /*
        20: Break and Continue

        break -> break out of a loop (or switch statement), skipping remainder of code within current iteration
        continue -> skip remainder of current iteration and return to beginning of loop
    */

    for (int i = 1; i <= 20; i++) {

        // When i exceeds 10, we break out of the loop before the remaining values of i (11-20) can be printed.
        if (i > 10) {
            break;
        }

        // When i reaches 5, we'll skip the remainder of this iteration
        // (printing 5 to the screen) and move on to the next iteration.
        if (i == 5) {
            continue;
        }

        cout << i << "\n";
    }

    return 0;
}