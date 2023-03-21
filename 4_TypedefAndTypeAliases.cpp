#include <iostream>
#include <vector>

//         This is very long to type out!
// typedef std::vector<std::pair<std::string, int>> pairlist_t; // Suffixing an alias with '_t' is considered good practice.
typedef std::string str_t;

using text_t = std::string;

int main() {
    /*
        Typedef: reserved keyword used to create an
        additional name (alias) for another data type.

        Having a new identifier for an existing type
        helps with readability and reduces typos.
    */
    
    // std::vector<std::pair<std::string, int>> pairlist; // Imagine typing this 50 times in your program!
    // pairlist_t pairlist; // Equivalent to the line above, but much more readable and much less tedious to type out!

    std::string one = "Hello";
    str_t two = "World";

    std::cout << one << " " << two << std::endl;

    /*
        The 'typedef' keyword has largely been replaced with the 'using' keyword
    */

    text_t three = "Goodbye";
    std::cout << three << std::endl;

    return 0;
}

