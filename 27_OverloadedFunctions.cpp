#include <iostream>

void func(char a);
void func(char a, char b);
void func(char a, int b);
void func(int a, char b);

int main() {
    /*
        27: Overloading functions

        This refers to the fact that C++ allows multiple functions to have the
        same name, provided the combination of the following 4 characteristics is unique:
        1. Name of function,
        2. Number of parameters.
        3. Order of parameters.
        4. Type of parameters.
        
        This combination is referred to as a functions "signature".
    */

    func('A');
    func('A', 'B');
    func('A', 1);
    func(1, 'A');

    return 0;
}

void func(char a) {
    std::cout << "This character is " << a << "\n";
}

void func(char a, char b) {
    std::cout << "This character is " << a << " and this character is " << b << "\n";
}

void func(char a, int b) {
    std::cout << "This character is " << a << " and this integer is " << b << "\n";
}

void func(int a, char b) {
    std::cout << "This integer is " << a << " and this character is " << b << "\n";
}




