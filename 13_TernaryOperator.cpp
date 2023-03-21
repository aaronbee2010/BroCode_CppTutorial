#include <iostream>
using namespace std;

int main() {
    /*
        13: Ternary operator - ?: - a replacement to an if/else statement which works using the following syntax:
        <condition> ? <code_to_run_if_true> : <code_to_run_if_false>;
    */
    int grade = 80;

    // if (grade >= 60) {
    //     cout << "You pass!\n";
    // } else {
    //     cout << "You fail!\n";
    // }

    // The above if-else statement can be represented as a ternary statement as follows:
    grade >= 60 ? cout << "You pass!\n" : cout << "You fail.\n";

    int evenOrOdd = 35;
    evenOrOdd % 2 == 0 ? cout << "This number is even.\n" : cout << "This number is odd.\n";

    bool happy = true;
    // happy ? cout << ":)\n" : cout << ":(\n";
    cout << (happy ? ":)\n" : ":(\n"); // A simplication of the commented-out command directly above this one.

    return 0;
}