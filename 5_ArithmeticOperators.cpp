#include <iostream>

int main() {
    /*
        5 - Arithmetic Operators:

        + (addition)
        - (subtraction)
        * (multiplication)
    */

    // Addition ---------------------------------------------------------------------------------------------------------------------------------
    int myVar1 = 4;

    myVar1 = myVar1 + 3; // Adds 3 to myVar1.
    myVar1 += 2;         // Adds 2 to myVar1.
    myVar1++;           // Adds 1 to myVar1. This operator can only increase a variable by 1 and no other number.
    std::cout << myVar1 << "\n"; // 10

    // Subtraction ------------------------------------------------------------------------------------------------------------------------------
    int myVar2 = 10;

    myVar2 = myVar2 - 3; // Subtracts 3 from myVar2.
    myVar2 -= 2;         // Subtracts 2 from myVar2.
    myVar2--;           // Subtracts 1 from myVar2. This operator can only decrease a variable by 1 and no other number.
    std::cout << myVar2 << "\n"; // 4

    // Multiplication ---------------------------------------------------------------------------------------------------------------------------
    int myVar3 = 4;

    myVar3 = myVar3 * 4; // Multiplies myVar3 by 4.
    myVar3 *= 4;         // Also multiplies myVar3 by 4.
    std::cout << myVar3 << "\n"; // 64

    // Division ---------------------------------------------------------------------------------------------------------------------------------
    int myVar4 = 1024;

    myVar4 = myVar4 / 2; // Divides myVar4 by 2.
    myVar4 /= 2;         // Also divides myVar4 by 2.
    std::cout << myVar4 << "\n"; // 256

    myVar4 /= 10; // Remember that we're dividing an int variable, so no decimals will be appended to result here.
    std::cout << myVar4 << "\n"; // 25

    double myVar5 = 35;

    myVar5 /= 15; // Now that we're dividing by a double, we can retain the decimal point and the digits after it.
    std::cout << myVar5 << "\n"; // 2.33333 <- This is a recurring number so obviously only a certain precision can be outputted.

    // Modulus (remainder, NOT magnitude!) ------------------------------------------------------------------------------------------------------
    int myVar6 = 15;

    myVar6 = myVar6 % 3;
    std::cout << myVar6 << "\n"; // 0 <- Since 15 is divisible by 3, the remainder of this division would be 0

    myVar6 = 15;
    myVar6 = myVar6 % 4;
    std::cout << myVar6 << "\n"; // 3 <- Since 15 is not divisible by 4, the remainder here will be a non-zero positive whole number.

    // Finding myInt % 2 is an easy way of checking whether or not a number is even.

    // NOTE: Remember that BIDMAS applies here as well!
    int myVar7 = 5 - 4 + 6 * 3 / 2;
    std::cout << myVar7 << "\n"; // 7

    myVar7 = 5 - (4 + 6) * 3 / 2;
    std::cout << myVar7 << "\n"; // -7






    return 0;
}



