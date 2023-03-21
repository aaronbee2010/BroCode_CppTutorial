#include <iostream>
/*
    55: Object-Oriented Programming

    An "object" is a collection of attributes and methods.

    * They can have characteristics and can perform actions.

    * Can be used to mimic real world items, take a rectangle for example:
      ~ Attributes of a rectangle could include:
        * length
        * width
        * colour
      ~ Methods of a rectangle could include:
        * Increase in all dimensions
        * Increase in length
        * Increase in width
        * Rotate
    * A dog would be another good example:
      ~ Attributes of a dog could include:
        * Sex
        * Breed
        * Height
        * Weight
      ~ Methods of a dog could include:
        * Eat
        * Bark
        * Sleep
        * Play fetch
    * Created from a class which acts as a "blueprint".
    
    Note that class names generally have the first letter in upper-case.
*/

class Human {
    public:
        // The parameters present within a class are known as "attributes".
        // We can assign values here that cannot be overridden when assigning
        // values to a specific object from this class.
        std::string name;
        std::string occupation;
        int age;
        std::string favouriteFood = "Pizza";

        // The functions present within a class are known as "methods".
        void eat() {
            std::cout << "This person is eating...\n";
        }
        void drink() {
            std::cout << "This person is drinking...\n";
        }
        void sleep() {
            std::cout << "This person is sleeping...\n";
        }

};

class car {
    public:
        std::string make;
        std::string model;
        int reg;
        std::string colour;

        void accelerate() {
            std::cout << "You put your foot on the accelerator!\n";
        }

        void brake() {
            std::cout << "You press the brakes!\n";
        }
     
};

int main() {
    // Let's create an object of the human class called "human1":
    Human human1;
    human1.name = "Aaron";
    human1.occupation = "Data Engineer";
    human1.age = 27;
    std::string favouriteFood = "Salad"; // This will be overridden by the value we specified
                                         // within the class ("Pizza")

    // Let's print the attributes of our "human1" object:
    std::cout << "Name of human1: " << human1.name << "\n";
    std::cout << "Occupation of human1: " << human1.occupation << "\n";
    std::cout << "Age of human1: " << human1.age << "\n";
    std::cout << "Favourite food of human1: " << human1.favouriteFood << "\n\n";

    // In the above example, classes appear similar to structs, however classes also have methods:
    human1.eat();
    human1.drink();
    human1.sleep();
    std::cout << "\n";

    // Let's look at another class:
    car car1;
    car1.make = "Vauxhall";
    car1.model = "Astra";
    car1.reg = 72;
    car1.colour = "Red";

    std::cout << "Make of car1: " << car1.make << "\n";
    std::cout << "Model of car1: " << car1.model << "\n";
    std::cout << "Registration of car1: " << car1.reg << "\n";
    std::cout << "Colour of car1: " << car1.colour << "\n\n";

    car1.accelerate();
    car1.brake();
    std::cout << "\n";
    
    return 0;
}