#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*
        8. Maths-related functions.
    */
    double x = 3;
    double y = 4;
    double z;

    // max() - takes multiple input values and returns the LARGEST one
    z = max(x, y);
    cout << "Out of " << x << " and " << y << ", " << z << " is the largest.\n";

    // min() - takes multiple input values and returns the SMALLEST one
    z = min(x, y);
    cout << "Out of " << x << " and " << y << ", " << z << " is the smallest.\n";

    // pow(a, b) - outputs a to the power of b (in Python, this would be a**b)
    z = pow(x, y);
    cout << x << " to the power of " << y << " is " << z << "\n";

    // sqrt() - outputs square root of input value
    z = sqrt(9);
    cout << "The square root of 9 is " << z << "\n";

    // abs() - returns the absolute value (magnitude) of the input
    //         in other words, it removes the sign of the input
    z = abs(-4);
    cout << "The magnitude of -4 is " << z << "\n";

    // round() - rounds input to nearest integer
    z = round(6.999);
    cout << "When you round 6.999 to the nearest integer, you get " << z << "\n";

    // ceil() - rounds input to the LARGER of the nearest two integers
    z = ceil(2.4);
    cout << "When you round 2.4 upwards, you get " << z << "\n";

    // floor() - rounds input to the SMALLER of the nearest two integers
    z = floor(5.7);
    cout << "When you round 5.7 downwards, you get " << z << "\n";

    /*
        For more information on the cmath library, you can take a look at:
        
        https://cplusplus.com/reference/cmath/
    */

   return 0;
}