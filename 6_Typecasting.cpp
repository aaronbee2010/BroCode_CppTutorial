#include <iostream>

int main() {
    /*
        6 - Typecasting (type conversion)
        This can be done in two ways:
        i) Implicit: New type is determined automatically
        ii) Explicit: New type is specified manually.
    */
    int pi1 = 3.14;
    std::cout << pi1 << '\n'; // 3 <- Decimal portion of value is truncated.

    double pi2 = 3.14;
    std::cout << pi2 << '\n'; // 3.14 <- Decimal portion of value is retained.

    // We've explicitly converted the pi3 variable to an integer.
    double pi3 = (int) 3.14;
    std::cout << pi3 << '\n'; // 3 <- Decimal portion of value is truncated.

    // Variables can also be typecasted after being declared previously.
    pi3 = (double) 3.14;
    std::cout << pi3 << '\n'; // 3.14 <- Decimal portion of value is retained.

    // Variables can also be typecasted implicitly.
    char c1 = 82;
    char c2 = 50;

    // Values can also be typecasted without being assigned to a variable.
    std::cout << c1 << c2 << (char)68 << (char)50 << '\n'; // R2 <- Refer to an ASCII decimal/char conversion table i.e. https://www.garykessler.net/library/ascii.html


    int marks = 120;
    int total = 150;
    double percentage = marks/(double)total * 100;
    std::cout << percentage << "%\n"; // 80% <- If we didn't cast total to a double, we would get 0%

    return 0;
}




