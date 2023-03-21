/*
    60: Polymorphism

    Unlike all of the other tutorials (From Bro Code's 6 hour C++ 2022 video),
    this one was made by researching polymorphism from other places.
*/
#include <iostream>

class Shape {
    public:
        double area;
        // Here, we're "overloading" methods within a class.
        // Overloading methods is one example of polymorphism.
        double calcArea(double side) {
            area = side * side;
            return area;
        }
        double calcArea(double length, double width) {
            area = length * width;
            return area;
        }
};

// Here, we have two different methods in parent and child classes with identical names.
// The method in the child class overrides the method in the parent class.
// This is known as "overriding".
//
// Overriding methods is another example of polymorphism.
class Parent {
    public:
        void myMethod() {
            std::cout << "I am a parent.\n\n";
        }
};
class Child : public Parent {
    public:
        void myMethod() {
            std::cout << "I am a child.\n\n";
        }
};

int main() {
    Shape square;
    std::cout << "Area of square: " << square.calcArea(5) << " cm^2\n";
    Shape rectangle;
    std::cout << "Area of rectangle: " << rectangle.calcArea(7, 5) << " cm^2\n\n";

    Child child;
    child.myMethod();

    return 0;
}
