#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a; // One of the sides adjacent to the right-angle.
    double b; // The other side adjacent to the right-angle.
    double h; // The hypotenuse

    cout << "This calculator will calculate the hypotenuse (h) of a right-angle triangle given the other two sides (a & b).\n";

    cout << "\nPlease enter the value of a: ";
    cin >> a;

    cout << "\nNow please enter the value of b: ";
    cin >> b;

    h = sqrt(
        pow(a, 2) + pow(b, 2)
    );
    cout << "\nThe value of h is " << h << ". Thank you.\n\n";

    return 0;
}