#include <iostream>

/*
    42: Memory addresses

    * A memory address is a location in memory where data is stored.
    * A memory address can be accessed with the "&" (address-of) operator.
*/

int main() {

    std::string name = "Aaron";
    int age = 27;
    bool student = true;
    // * Variables are containers that store data values.
    // * These variables need to exist somewhere.
    // * Variables exist in your computers memory at a given address.
    // * We can find that address using & (the "address-of" operator):

    // This will print the address in memory where the "name" variable begins, i.e. 0x7fffffffd890 > 55440 (decimal)
    std::cout << &name << std::endl;
    // This will print the address in memory where the "age" variable begins, i.e. 0x7fffffffd88c > 55436 (decimal)
    std::cout << &age << std::endl;
    // This will print the address in memory where the "student" variable begins, i.e. 0x7fffffffd88b > 55435 (decimal)
    std::cout << &student << std::endl;
    
    // To convert hexadecimal to decimal, you can use a calculator like this one:
    // https://www.rapidtables.com/convert/number/hex-to-decimal.html
    //
    // As you can see, the age variable begins 4 bytes before the name variable, which would make them adjacent
    // considering an integer in C++ takes 4 bytes of memory. In other words, the last byte of the age variable
    // and the first byte of the name variable are directly next to each other in memory.
    //
    // In the same manner, the student variable begins 1 byte before the age variable, and a bool only takes
    // 1 byte of memory, so these two variables would be adjacent in memory.

    return 0;
}
