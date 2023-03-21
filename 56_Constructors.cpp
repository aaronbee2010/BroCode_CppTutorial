#include <iostream>
/*
    56: Constructors
    
    A constructor is a special method that is
    automatically called when an object is instantiated.

    This is useful for assigning values (as arguments) to attributes.
*/

class Student {
    public:
        std::string name;
        int age;
        double mark;
    // We already have a constructor that is automatically called behind the scenes,
    // but we can also explicitly set one up:

    // The constructor has the same name as the class.
    Student(std::string myName, int myAge, double myMark) {
        this -> name = myName; // The "this" keyword is only required if the attribute
        this -> age = myAge;   // name and the corresponding constructor parameter name
        this -> mark = myMark; // are identical to each other.
        // name = myName; As these two names are different, this also works.
        // name = name; This would NOT work. The names are identical so "this" is needed.
        // this -> name = name; Matching names would work here as "this" is present.
    }
};

class Car {
    public:
        std::string make;
        std::string model;
        int reg;
        std::string colour;
    
    Car(std::string myMake, std::string myModel, int myReg, std::string myColour) {
        make = myMake;
        model = myModel;
        reg = myReg;
        colour = myColour;
        // You can also implement additional checks and flow control within constructors if you want to.
        if (myColour == "White" || myColour == "Silver" || myColour == "Grey" || myColour == "Black") {
            std::cout << "This colour is greyscale.\n";
        } else {
            std::cout << "This colour is not greyscale.\n";
        }
    }

    // This also works:
    // Car(std::string make, std::string model, int reg, std::string colour) {
    //     this -> make = make;
    //     this -> model = model;
    //     this -> reg = reg;
    //     this -> colour = colour;
    // }

};

int main() {
    // Before, when we were assigning attributes to an object, we would say, for example:
    // car1.make = "Ford";
    // With a constructor, we can do this automatically.

    // When the object below is instantiated, the values within the brackets will be
    // passed as arguments to the constructor.
    Student student1("Aaron", 27, 75.6);
    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.mark << "\n\n";
    // This shows that you don't have to instantiate an object then manually assign values
    // to its attributes afterwards. You can do this all at once by using a constructor.

    // Let's look at another example:
    Car car1("Ford", "Focus", 72, "Blue");
    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.reg << "\n";
    std::cout << car1.colour << "\n\n";

    return 0;
}

























