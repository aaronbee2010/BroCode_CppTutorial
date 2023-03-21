#include <iostream>

/*
    47: Null pointers

    Null value: A special value that means something has no value.
    
    When a pointer is holding a null value, that pointer is not pointing at anything (null pointer).

    nullptr: A keyword that represents a "null pointer literal"

    This is useful because if we create a pointer but don't assign it a value,
    then we don't know where it's pointing to.

    nullptr's are helpful when determining if an address was successfully assigned to a pointer.

    It would be good practice that the pointer in question doesn't point anywhere.

    When using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory
    as this will cause undefined behaviour.
*/

int main() {
    // Since we don't know what address to assign to the pointer, we instead assign "nullptr"
    int *pointer = nullptr;

    int x = 123;
    // pointer = &x;
    // std::cout << pointer << std::endl;

    /*  VERY IMPORTANT NOTE:
        If you dereference a null pointer or a pointer that wasn't assigned a value, it can lead to undefined behaviour!!!
    
        Deferencing a pointer means viewing the value stored in the address it is pointing to.
    */

    // Obviously, if a pointer isn't pointing anywhere, then trying to get the value of where that pointer is "pointing to"
    // is going to result in an unusual and possibly dangerous outcome.
    //
    // What some programmers do is check to see if a pointer is a null pointer before continuing.

    // We'll get the first outcome if we comment out "pointer = &x;" and "std::cout << pointer << std::endl;"
    // otherwise we'll get the second outcome.
    if (pointer == nullptr) {
        std::cout << "You have not successfully assigned an address to your pointer. :(" << std::endl;
        std::cout << "Your pointer instead points to: " << pointer << std::endl;
        // Please, for the love of God, do NOT uncomment the line below!!!
        // std::cout << "Dereferencing your pointer gives: " << *pointer << std::endl;
    } else {
        std::cout << "You have successfully assigned an address to your pointer. :)" << std::endl;
        std::cout << "This address is: " << pointer << std::endl;
        std::cout << "The value at this address is: " << *pointer << std::endl;
    }

    // If your pointer is still a null pointer, it's not safe to dereference that pointer!

    return 0;
}