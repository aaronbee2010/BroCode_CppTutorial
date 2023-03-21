#include <iostream>

// All tutorials in this folder (except 60_Polymorphism) are derived from this video:
// https://www.youtube.com/watch?v=-TkoO8Z07hI

int main() {
    // Single line comment

    /*
        Multi
        line
        comment
    */

    /*
        We can print a string (a sequence of characters) to the screen as shown below:

        NOTE: std = standard, cout = character output, endl = end line
    */
    std::cout << "Hello World" << std::endl; // Comments can be inserted to the RIGHT of code but NOT the LEFT

    /*
        Variables be declared and simulateneously assigned a value.

        This is handy if you already know what value the variable needs to have
    */
    int x = 3;

    /*
        Variables can also be declared without an initial value.
        They can then have a value assigned to them later in the program i.e. as an input from the user later in the program
    */
    int y;
    y = 5;

    // Multiple lines can be printed by one line of code, as shown here:
    std::cout << x << std::endl << y << std::endl;

    // We can add multiple variables together to create another variable:
    int sum = x + y;
    std::cout << "x + y = " << sum << std::endl;

    /*
        Let's go over types:
    */

    // int (integer)
    int age = 27;
    int year = 2023;
 
    // double (decimal number)
    double capacity = 4.25;
    double weight = 38.5;

    int z = 7.5; // If you try to assign a double value to an integer variable, the decimal point and the subsequent numbers are removed.
    std::cout << z << std::endl; // Prints 7 (the result of 7.5 getting truncated as explained above)
    /*
        Sometimes this is fine, but it can be problematic if the truncated integer is significantly different numerically from the
        double that produced it. i.e. 7.999999 getting truncated to 7 (despite the former number being roughly equal to 8 instead of 7)
    */

    // char (single character)
    char grade = 'C';
    char star_rating = '4'; // ONLY single quotes can be used!
    char currency = '$';
    std::cout << grade << " " << star_rating << " " << currency << std::endl;

    char overflow = 'HW'; // This will generate an "integer overflow" warning and only the FINAL character will be displayed.
    std::cout << overflow << std::endl;

    // bool (boolean - true or false)
    bool sad = false;
    bool glad = true;
    std::cout << sad << " " << glad << std::endl; // A bool with value 'false' gets printed as 0 and 'true' gets printed as 1

    // string (sequence of characters)
    std::string name = "Aaron"; // ONLY double quotes can be used! The opposite compared to char!
    std::string colour = "Bluu";
    std::string id = "24"; // Note that this won't treated as a number but as a sequence of characters
    std::string address = "35 Everblush Rd.";
    std::cout << name << " " << colour << " " << id << " " << address << std::endl;

    
    
    
    
    return 0;
    /*
        This returns a status code of 0 (success). This always goes at the VERY end of the function!
        If you were to type any code after this, then that code would just get ignored!
    */
}