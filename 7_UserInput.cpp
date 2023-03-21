#include <iostream>

int main() {
    /*
        7. User input

        cout (character output) << (insertion operator)
        cin  (character input)  >> (extraction operator)
    */

    std::string name;
    int age;

    std::cout << "Please provide your name: ";
    std::cin >> name; // There's a newline included here.

    std::cout << "\nThank you. Now please provide your age: ";
    std::cin >> age; // There's a newline included here.

    std::cout << "\nYour name is " << name << " and your age is " << age << ".\n\n";

    // If you type a space within the input, then anything after the space will be ignored.
    //std::cout << "Please provide your full name: ";
    //std::cin >> name;
    
    // Only the part of the string before the first space will be printed.
    //std::cout << "\nYour full name is " << name << ".\n";

    // To solve this problem, we can use the std::getline() function:
    
    std::string full_name;
    std::cout << "Please provide your full name: ";

    // The \n from the previous invocation of cin (if there was one) would precede the
    // input from cin in the getline() function, abruptly terminating the input reading
    // before any input can be given from the user.
    //
    // The inclusion of std::ws clears any whitespace (inc. newlines)
    // before reading the input within the getline() function.
    std::getline(std::cin >> std::ws, full_name);
    std::cout << "\nYour full name is " << full_name << ".\n"; // Now we can print strings with spaces.

    return 0;
}