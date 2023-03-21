#include <iostream>
/*
    50: Recursion: A programming technique where a function invokes itself from within.
        * Can be used to break down a complex concept into repeatable single steps.
    
    We can approach many problems either "iteratively" or "recursively".

    Advantages: * Less code that's presented more cleanly.
                * Useful for sorting and searching algorithms.
    
    Disadvantages: * Uses more memory
                   * Slower
    
    You need to consider the pros and cons of a recursive approach and decide which
    approach is more appropriate for the task at hand.
    
    A simple example of recursion:

    void doSomething() {

        doSomething();
    }
*/

// To accomplish the task of walking, we would take a single step and repeat it multiple times.

void walk(int steps);
int factorial(int num);

int main() {

    walk(4);

    std::cout << factorial(6) << "\n";

    return 0;
}

void walk(int steps) {
    // Iterative approach:
    // for (int i = 1; i <= steps; i++) {
    //     std::cout << "You took a step!\n";
    // }

    // Recursive approach:
    if (steps > 0) {
        std::cout << "You took a step!\n";
        walk(steps - 1);
    }

    /*
        Here, the recursive approach may be simpler to read and understand for some people
        (although they're both simple), but also slower and heavier on memory.

        This function is probably best done iteratively, but certain other algorithms like sorting and
        searching algorithms would probably be best done recursively.
    */
}

int factorial(int num) {
    // Iterative approach
    // int result = 1;
    // for (int i = 1; i <= num; i++) {
    //     result = result * i;
    // }
    // return result;

    // Recursive approach
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }

    /*
        Here's what this function actually does:

        factorial(6) = 6 * factorial(5);
        factorial(5) = 5 * factorial(4);
        factorial(4) = 4 * factorial(3);
        factorial(3) = 3 * factorial(2);
        factorial(2) = 2 * factorial(1);
        factorial(1) = 1;
        factorial(2) = 2 * 1 = 2;
        factorial(3) = 3 * 2 = 6;
        factorial(4) = 4 * 6 = 24;
        factorial(5) = 5 * 24 = 120;
        factorial(6) = 6 * 120 = 720;
    */

    // Again, some people may find the recursive process easier to understand,
    // but the disadvantages mentioned previously still apply.

}

