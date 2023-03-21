#include <iostream>

/*
    45: Bank card validator program

    Here, we'll use the Luhn Algorithm (LA) to determine whether or not a bank card number is valid.
*/

int evenReverseSum(std::string number, int size);
int oddReverseSum(std::string number, int size);

int main() {
    std::string cardNumber;
    int cardNumberSize;
    int digit;
    int result = 0;

    std::cout << "Please enter a bank card number (without spaces): ";
    std::cin >> cardNumber;

    cardNumberSize = cardNumber.length();

    result += evenReverseSum(cardNumber, cardNumberSize);
    result += oddReverseSum(cardNumber, cardNumberSize);
    
    if (result % 10 == 0) {
        std::cout << "This bank card number is valid :)" << std::endl;
    } else {
        std::cout << "This bank card number is invalid :(" << std::endl;
    }

    return 0;
}

int evenReverseSum(std::string number, int size) {
    int digit;
    int result = 0;
       
    // Even digits of reversed string:
    for (int i = size - 2; i >= 0; i -= 2) {
        digit = (int)number[i] - 48;
        if (digit >= 5) {
            /*
                If the digit being analysed is 5 or higher, then when we double it as the LA requires,
                the doubled value will have two digits. The LA states that when this occurs, each digit
                of the double must have the digits separated and their sum calculated.

                Let's look at all of the digits from 5 and above, their doubles and the sum of their doubles digits.
                We'll designate the digit being analysed as "x" and the sum of the digits of its double as "y":
                DIGIT(x)   DOUBLE   SUM(y)
                   5         10     1+0=  1
                   6         12     1+2=  3
                   7         14     1+4=  5
                   8         16     1+6=  7
                   9         18     1+8=  9

                Looking at the relationship between x and y, we notice the following characteristics:
                * y increases linearly with x.
                * When x increases by 1, y increases by 2.
                These two points tell us that we have a linear relationship, y = mx + c, with m = 2.
                Simple arithmetic then lets us determine that c = -9.

                Therefore, y = 2x - 9 when x = 5, 6, 7, 8 or 9, hence the assignment below.
            */
            digit = (2 * digit) - 9;
        } else {
            // If the digit being analysed is 0, 1, 2, 3 or 4, we can just double it and move on to the next step.
            digit *= 2;
        }
        result += digit;
    }
    
    return result;
}

int oddReverseSum(std::string number, int size) {
    int result = 0;

    // Odd digits of reversed string:
    for (int i = size - 1; i >= 0; i -= 2) {
        result += (int)number[i] - 48;
    }

    return result;
}
