#include <iostream>
// 43. Pass by VALUE vs pass by REFERENCE

void swapValue(std::string x, std::string y) {
    std::string temp;
    // Here's a simple way to swap the values of x and y using a temporary variable.
    // What could possibly go wrong? ¯\_(ツ)_/¯
    temp = x;
    x = y;
    y = temp;
}

void swapReference(std::string &x, std::string &y) {
    std::string temp;
    
    temp = x;
    x = y;
    y = temp;
}

void printValue(std::string x, std::string y) {
    std::cout << "Memory address of x (copy):     " << &x << std::endl;
    std::cout << "Memory address of y (copy):     " << &y << std::endl;
}

void printReference(std::string &x, std::string &y) {
    std::cout << "Memory address of x (printReference UDF): " << &x << std::endl;
    std::cout << "Memory address of y (printReference UDF): " << &y << std::endl;
}

int main() {
    std::string x = "bepis";
    std::string y = "conk";

    swapValue(x, y);
    std::cout << "Glass x contains " << x << " and glass y contains " << y << "." << std::endl;

    /*
        Unfortunately, this doesn't work, but why?
        
        Normally when we pass a variable to a function, we're passing the variables VALUE.
        When we invoke the swapValue UDF, we're creating copies of the original values then passing
        those copies to this UDF instead of passing the original values themselves.
        
        From the moment the copies are created, the four variables in question look like this:
        * x (original) = "bepis"
        * y (original) = "conk"
        * x (copy) = "bepis"
        * y (copy) = "conk"
        
        Since the copies are sent to the UDF instead of the original variables, the end result
        looks like this:
        * x (original) = "bepis"
        * y (original) = "conk"
        * x (copy) = "conk"
        * y (copy) = "bepis"
        
        Here, you can see that the original variables haven't changed at all and it's the copies
        that have had their values swapped instead.
        
        If we want to swap the values of the original variables, we instead need to pass the
        variables REFERENCE to a UDF. By reference, I mean the memory address.

        As seen in the previous lesson, we can access a variables memory address using the "&"
        (address of) operator.

        We only need to add &'s to the parameters in the swapReference UDFs definition, and we
        don't need to specify it when invoking the UDF.
    */
    swapReference(x, y);
    std::cout << "Glass x contains " << x << " and glass y contains " << y << ".\n\n";

    /*
        There we go! :)

        When we pass by reference, we're telling the UDF where the values of the original variables are located,
        and the UDF can then change these values directly.

        To reinforce what we've learned so far, let's pass by value again, and fetch the memory addresses of these
        four variables:
    */

    x = "bepis"; // Let's reassign the original values to these two variables first.
    y = "conk";

    std::cout << "Memory address of x (original): " << &x << std::endl;
    std::cout << "Memory address of y (original): " << &y << std::endl;
    printValue(x, y);
    std::cout << std::endl;

    /*
        As you can see, the original x variable and its corresponding copy have two different addresses,
        same with the y variable and its copy.

        Let's now have a look at what this looks like when passing the reference.
    */

    std::cout << "Memory address of x (original):           " << &x << std::endl;
    std::cout << "Memory address of y (original):           " << &y << std::endl;
    printReference(x, y);
    std::cout << std::endl;

    /*
        Here, you can see that when passed as a reference to the UDF, x and y have the same memory address
        in the UDF as they do in the main() function.
    */

    // In general, you should pass by reference whenever you can, only passing by value if you have a good reason to.

    return 0;
}

