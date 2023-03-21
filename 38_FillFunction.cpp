#include <iostream>

int main() {
    /*
        38: fill() function: Fills a range of elements with a specified value

        Syntax: fill(begin, end, value)
    */
    // std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    // What if our foods[] array had a size of 100? Typing "pizza" into the array 100 time would be impractical.
    // Instead, we can use the fill() function to fill all of the elements in the array with the value "pizza".

    const int SIZE = 99; // Traditionally, constants are named in all-caps.

    std::string foods[SIZE] = {};

    // fill(foods, foods + SIZE, "pizza");

    // fill(foods, foods + (SIZE/2), "pizza");
    // fill(foods + (SIZE/2), foods + SIZE, "hamburger");

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (2 * SIZE/3), "hamburger");
    fill(foods + (2 * SIZE/3), foods + SIZE, "hot dog");

    for (std::string food : foods) {
        std::cout << food << " ";
    }
    std::cout << "\n";

    return 0;
}


