#include <iostream>
/*
    46: Pointers: Variables that store the memory address of another variable. 
                  We use pointers because sometimes, it's easier to work with an address.

    & > "address-of" operator
    * > "dereference" operator
*/
int main() {
    /*
        Suppose I've got 100 pizzas, and I'm giving them away to people who live on my cul-de-sac.

        Rather than go to each house and deliver a pizza, I can send a message to all of the other houses,
        telling them to come and get a free pizza from my house at this specific address: 35 Drury Lane

        This is an example of why it's sometimes easier to work with an address.
    */

    std::string name = "Aaron";   
    // Create a pointer to the variable above.
    // This pointer should have the same data type as the variable it's pointing to.
    // Note the "*" (dereference operator) that pointer names begin with.
    std::string *pName = &name;
    // A common naming convention for pointers is to prefix the name of the variable being pointed to
    // with a "p" and use that as the pointers name. We'll name the "n" uppercase for more readability.

    std::cout << pName << std::endl; // i.e. 0x7fffffffd8a0 <-- the address stored in the pName pointer

    std::cout << *pName << std::endl; // "Aaron" <-- the value located at the address stored in the pName pointer

    // Here's another example:
    int age = 27;
    int *pAge = &age;

    std::cout << pAge << std::endl; // i.e. 0x7fffffffd87c
    std::cout << *pAge << std::endl; // 27

    // Let's return to the Pizza analogy we used before:
    std::string freePizzas[5] = {
        "pizza1",
        "pizza2",
        "pizza3",
        "pizza4",
        "pizza5",
    };

    // std::string *pFreePizzas = &freePizzas;
    // We get an error here becaue the freePizzas variable is already an address.

    // Therefore, we don't need to prefix it with an & operator, so we do this instead:
    std::string *pFreePizzas = freePizzas;

    std::cout << freePizzas << std::endl; // i.e. 0x7fffffffd7d0
    std::cout << *pFreePizzas << std::endl; // "pizza1" <-- Here, we're "dereferencing" the pointer.
    // Since the address stored in the pointer is where the array BEGINS, the value located at that address
    // will be the FIRST element in that array.
    //
    // You should nonetheless be aware that the pointers for all of the elements will each point to the
    // same address: the one where the array begins.
    //
    // We can demonstrate this below:
    for (std::string pizza : freePizzas) {
        std::cout << "Memory address of " << pizza << ": " << &pizza << std::endl;
    }

    // One more CRUCIAL thing to take away from this exercise is that the "*" sign does two different things in our code:
    //
    // 1. When used in declaration (string* ptr), it creates a pointer variable.
    // 2. When not used in declaration, it act as a dereference operator.
    //
    // Don't let this catch you out!

    // In summary, rather than deliver the pizza to each address, I can just give the others on my cul-de-sac
    // the address to where my pizzas are.
    
    return 0;
}