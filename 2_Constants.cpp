#include <iostream>

int main() {
    // The const (constant) prefix prevents a variables value from being changed by the program.
    // A const variable MUST have a value assigned to it upon declaration!
    const double pi = 3.14159;
    int radius = 15;
    std::cout << "Radius of circle: " << pi * radius * radius << std::endl;

    const int Hres = 2560;
    const int Vres = 1440;
    std::cout << "The resolution of my display is " << Hres << "x" << Vres << std::endl;

    /*
        It's good practice to prefice variables with "const" if you know they're not to change later.
        This prevents you or a collaborator from mistakenly changing the value of this variable further in the program.
    */
    
    return 0;
}