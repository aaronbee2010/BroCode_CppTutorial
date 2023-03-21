#include <iostream>
using namespace std;

int main() {
    /*
        15: Temperature conversion calculator
    */
    double inputTemp;
    char inputUnit;
    double outputTemp;
    
    cout << "Please enter the temperature value you want to convert: ";
    cin >> inputTemp;
    cout << "Please enter the unit of the value you previously specified (C or F): ";
    cin >> inputUnit;

    if (inputUnit == 'C' || inputUnit == 'c') {
        outputTemp = (inputTemp * 1.8) + 32;
        cout << "The converted value is " << outputTemp << " degrees Fahrenheit.\n";
    } else if (inputUnit == 'F' || inputUnit == 'f') {
        outputTemp = (inputTemp - 32) / 1.8;
        cout << "The converted value is " << outputTemp << " degrees Celsius.\n";
    } else {
        cout << "You have entered an invalid unit.\n";
    }

    return 0;
}