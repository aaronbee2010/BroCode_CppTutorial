#include <iostream>
using namespace std;

int main() {
    /*
        12. Simple calculator program
    */

    char op;
    double num1;
    double num2;
    double result;

    cout << "********** CALCULATOR **********\n";

    cout << "Enter either \"+\", \"-\", \"*\", or \"/\": ";
    cin >> op;

    cout << "Enter the first number you would like to input: ";
    cin >> num1;

    cout << "Enter the second number you would like to input: ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Your result is " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "Your result is " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "Your result is " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << "Your result is " << result << "\n";
            break;
        default:
            cout << "You have not entered an appropriate operator.\n";
            break;
    }






    cout << "********************************\n";

    return 0;
}