#include <iostream>
/*
    51: Function templates: describe what a function looks like.
        Can be used to generate as many overloaded functions as needed,
        each using different data types
    
    You can think of it like a cookie cutter. The cookies are the same shape,
    but the dough used can be different.

    One of the main benefits of function templates is that you only have to write
    them once, then they're immediately compatible with a variety of data types.
    This certainly sounds nicer than having to type out several almost-identical
    functions if you ask me!
*/

// int max(int x, int y) {
//     return (x >= y) ? x : y;
// }

// double max(double x, double y) {
//     return (x >= y) ? x : y;
// }

// char max(char x, char y) {
//     return (x >= y) ? x : y;
// }

// Here's the function template equivalent to the three UDFs above.
// "T" serves as a placeholder for various data types.
// template <typename T> // <-- Template parameter declaration
// T max(T x, T y) {
//     return (x >= y) ? x : y;
// }
// As you can see when running it, the function template behaves differently
// depending on the types of the input, which means that it's equivalent to
// typing out three different UDFs, without the extra unnecessary typing.

// There's a notable issue however. This function template only works if all input
// values have the same type. If we mix and match here (i.e. one int value and
// one double value) then we'll get an error.
//
// We can resolve this issue by adding another typename to the template parameter
// declaration and the template itself.
//
// Now we've added another typename. This way, the type of the output matches
// the type of the second input.
// template <typename T, typename U>
// U max(T x, U y) {
//     return (x >= y) ? x : y;
// }

// Even better, there's something else we can do here. We can make the function template infer
// the type of the output using its value by using the "auto" keyword.
template <typename T, typename U>
auto max(T x, U y) {
    return (x >= y) ? x : y;
}

int main() {
    std::cout << max(1, 2) << "\n"; // Output: 2

    std::cout << max(1.1, 2.1) << "\n"; // Output: 2
    // The doubles inputted to the UDF just get truncated.
    // Normally, we would make another (overloaded) max()
    // UDF that takes and returns doubles instead of ints
    // To resolve this issue.

    std::cout << max('1', '2') << "\n"; // Output: 50 (decimal value of '2' char)
    // And here, the decimal value of the largest ASCII char gets returned.
    // Again, we would normally make another overloaded function that would
    // Return the ASCII char itself and not its decimal value.

    /*
        The problem with making three overloaded functions here is that it's unnecessary
        effort considering that these functions are almost identical to each other.
        They perform the same task, with only the types of the parameters varying.

        What if we could make just one function that will accept any data type?
        This is what function templates are for.

        Function templates allow you to reuse the same code for different input data types
        instead of having to make multiple copies of the same function then changing the parameter types.
    */

    std::cout << max(1, 2.1) << "\n";

    return 0;
}
