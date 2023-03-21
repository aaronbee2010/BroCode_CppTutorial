#include <iostream>
/*
    58: Getters and Setters

    * Abstraction: Hiding unnecessary data from outside a class
      ~ Getter: Function that makes a private attribute READABLE
      ~ Setter: Function that makes a private attribute WRITEABLE
*/

class Stove {
    // public:
    //     int temperature = 0; // Since this attribute is public, it's accessible from OUTSIDE the class.
    
    private:
        int temperature = 25; // Since this attribute is private, it's NO LONGER accessible from OUTSIDE the class.
    // This attribute is hidden form the outside world. If I need access to the value of this attribute,
    // I can write a "getter":
    public:
        int getTemperature() { // Getter function
            return temperature;
        }

        void setTemperature(int newTemperature) { // Setter function
            // You can perform additional checks and flow control statements within a getter or setter.
            if (temperature == newTemperature) {
                std::cout << "The temperature is already set to this value\n\n";
            } else {
                temperature = newTemperature;
                std::cout << "Value set\n\n";
            } 
        }
        // You could even make a function that is both a getter and a setter if you want to.

        // You can also invoke getters and setters within a constructor:
        Stove(int myTemperature) {
            setTemperature(myTemperature);
            // You can also implement additional checks and flow control within constructors if you want to.
            if (myTemperature < 10) {
                std::cout << "This is a cold temperature.\n\n";
            } else if (myTemperature > 50) {
                std::cout << "This is a hot temperature.\n\n";
            } else {
                std::cout << "This is a mild temperature.\n\n";
            }
        }

};

int main() {

    // Stove stove1;
    Stove stove1(50);

    // if the "temperature" attribute is PUBLIC, the two lines below will run without issue.
    // stove1.temperature = 9001;                 // if the "temperature" attribute is PRIVATE, you get this error:
    // std::cout << stove1.temperature << "\n\n"; // "error: ‘int Stove::temperature’ is private within this context"

    // We can change this by creating a "getter". After creating one, let's try this again:
    // stove1.temperature = 9001; // The temperature is still not writeable, so this line will remain commented out.
    std::cout << stove1.getTemperature() << "\n\n"; // Temperature (25) is now readable!
    // Using the getter, we can access the value of a private attribute, but we can't update it.

    // If you also need a private attribute to be writable, you can create a "setter". Let's try this again:
    stove1.setTemperature(75);
    std::cout << stove1.getTemperature() << "\n\n";

    








    return 0;
}
