#include <iostream>

// 53: Passing structs as arguments

struct car{
    std::string make;
    std::string model;
    int reg;
    std::string colour;
};

// void printCar(car myCar);
void printCar(car &myCar);

void paintCar(car &myCar);

int main() {
    car car1;
    car1.make = "Vauxhall";
    car1.model = "Astra";
    car1.reg = 72;
    car1.colour = "Red";

    car car2;
    car2.make = "Ford";
    car2.model = "Focus";
    car2.reg = 72;
    car2.colour = "Blue";

    // printCar(car1);
    // printCar(car2);
    /*
        Unlike arrays, structs are passed by value instead of reference.
        This means that the variables used within the function are copies of the originals.

        Let's demonstrate this:
    */
    
    // std::cout << "Memory Address of struct: " << &car2 << "\n\n";
    // printCar(car2);

    /*
        As you can see, the two memory addresses printed are different to each other, which means
        that the two variables whose addresses are being printed are also different to each other.

        If we wanted these two addresses to be the same, we would pass the structs memory address
        instead (passing by reference)
    */

    // std::cout << "Memory Address of struct: " << &car2 << "\n\n";
    // printCar(car2);
    /*
        Now we can see that the memory addresses are identical.
        Let's try changing the colour of a car by passing a reference.
    */

    printCar(car1);
    paintCar(car1);
    printCar(car1);

    return 0;
}

// void printCar(car myCar) {
//     std::cout << "Memory Address of struct: " << &myCar << "\n";
//     std::cout << "Make: " << myCar.make << "\n";
//     std::cout << "Model: " << myCar.model << "\n";
//     std::cout << "Reg: " << myCar.reg << "\n";
//     std::cout << "Colour: " << myCar.colour << "\n\n";    
// }

void printCar(car &myCar) {
    std::cout << "Memory Address of struct: " << &myCar << "\n";
    std::cout << "Make: " << myCar.make << "\n";
    std::cout << "Model: " << myCar.model << "\n";
    std::cout << "Reg: " << myCar.reg << "\n";
    std::cout << "Colour: " << myCar.colour << "\n\n";    
}

void paintCar(car &myCar) {
    std::cout << "Your car is currently " << myCar.colour << ".\n";

    std::cout << "What colour would you like to change your car to? ";
    std::cin >> myCar.colour;

    std::cout << "Congratulations! Your car is now " << myCar.colour << "!\n\n";
}

















































