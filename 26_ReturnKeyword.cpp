#include <iostream>

double square(double s);
double cube(double c);
std::string concatTwoStrings(std::string fi, std::string la);

int main() {
    /*
        26: return keyword - this returns a value back to the spot where you called the encompassing function

        This keyword along with the corresponding value is generally seen at the end of a function
    */
    double length = 6.0;
    double area = square(length);
    double vol = cube(length);

    std::cout << "The area of a square with length " << length << " cm is " << area << " cm^2.\n";
    std::cout << "The volume of a square with length " << length << " cm is " << vol << " cm^2.\n";

    std::string firstName = "Aaron";
    std::string lastName = "Bee";
    std::string fullName = concatTwoStrings(firstName, lastName);

    std::cout << "My full name is " << fullName << ".\n";

    return 0;
}

double square(double s) {
    return (s * s);
}

double cube(double c) { // You can still use "s" as the input variable like with square() but it's not good practice
    return (c * c * c); // and can potentially lead to readers of this code confusing the two!
}

std::string concatTwoStrings(std::string fi, std::string la) {
    return (fi + " " + la);
}
