#include <iostream>
using namespace std;

void printInfo1(string n, int a);
void printInfo2(string n, int a);
void printInfo3(const string n, const int a);
void printInfo4(const string &n, const int &a);

/*
    Const parameter: a parameter that is effectively read-only. Reasons to use consts include:
    * Using consts in place of variables where possible makes the code more secure and prevents
      potentially headaches i.e. another programmer accidentally changing the value of the variable
      down the line.
    * Assigning a value to a const (instead of a variable) conveys its intended purpose
      and tells other programmers not to alter its value.
    
    Consts are useful for references and pointers:
    
    * For references, nobody can accidentally change the value of the data located at the reference.
    * For pointers, nobody can accidentally change the address that a pointer is pointing to.

    For more information on the benefits of using consts, check out the link below:
    https://isocpp.org/wiki/faq/const-correctness
*/

int main() {
    string name = "Aaron";
    int age = 27;

    // Let's send our name and age variables to a UDF and print their values to the screen.
    printInfo1(name, age);

    // Same as before but now we reassign their values within the UDF before printing them to the screen.
    printInfo2(name, age);

    // Now we set the input parameters of the UDF to read-only by prepending the "const" keyword to them.
    // If we don't comment out the value reassignments then we get a compilation error stating these values
    // are read only and thus cannot be modified.
    printInfo3(name, age);

    // When we pass our variables to printInfo2() by value, it's the copies whose values get reassigned, so the
    // original variables remain untouched. In this sense, it's probably not a big deal to go as far as making the
    // copies read-only when we're passing values like with printInfo3, although the "const" keywords at least
    // convey intent.
    //
    // Now if we're passing references to a UDF like we are with printInfo4(), then we're able to modify the original
    // values of the variables we're passing to it. This is now a bigger deal.
    //
    // If we don't want anyone to accidentally modify the original variables by mistake, then making the parameters for
    // the function constant or making the variables themselves constant can potentially save you and 
    // others working on the code from a lot of headache. Even if you want to change the value of these variables
    // later in the code, you might not want this specific UDF (printInfo4() in this case) to change their values.

    return 0;
}

void printInfo1(string n, int a) {
    cout << "Name: " << n << endl;
    cout << "Age: " << a << endl << endl;
}

void printInfo2(string n, int a) {
    n = "";
    a = 0;
    cout << "Name: " << n << endl;
    cout << "Age: " << a << endl << endl;
}

void printInfo3(const string n, const int a) {
    // n = "";
    // a = 0;
    cout << "Name: " << n << endl;
    cout << "Age: " << a << endl << endl;
}

void printInfo4(const string &n, const int &a) {
    // n = "";
    // a = 0;
    cout << "Name: " << n << endl;
    cout << "Age: " << a << endl << endl;
}




