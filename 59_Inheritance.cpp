/*
    59: Inheritance

    "Inheritance" refers to a class receiving attributes and methods from another class.
    
    "children" classes inherit from a "parent" class.

    This helps to reuse similar code within multiple classes.
*/
#include <iostream>

class Animal {
    public:
        bool alive = true;

        void eat() {
            std::cout << "This animal is eating.\n\n";
        }
};

/*
    Here, the "Dog" class is the child and the "Animal" class is the parent.

    Even if there's nothing in this class at all, it can still
    utilise the attributes and methods of its parent class.
*/
class Dog : public Animal {
    public:
        void bark() {
            std::cout << "The dog goes woof!\n\n";
        }
};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "The cat goes meow!\n\n";
        }
};

class Shape {
    public:
        double area;
        double volume;
        std::string colour;
};

class Cube : public Shape {
    public:
        double side;

        Cube(double mySide) {
            area = 6 * mySide * mySide;
            volume = mySide * mySide * mySide;
        }
};

class Sphere : public Shape {
    public:
        double radius;

        Sphere(double myRadius) {
            area = 12.56637 * myRadius * myRadius;
            volume = 4.18879 * myRadius * myRadius * myRadius;
        }
};

int main() {

    Dog dog1;
    // The attributes of the "Animal" class are inherited by the "Dog" class. 
    std::cout << "The life status of dog1 is: " << dog1.alive << "\n\n";
    // The methods of the "Animal" class are inherited by the "Dog" class. 
    dog1.eat();
    // Of course, the attributes and methods of the "Dog" class can also be used.
    dog1.bark();

    // Let's look at another example:
    Cat cat1;
    // The attributes and methods of the "Animal" class are inherited by the "Cat" class.
    std::cout << "The life status of cat1 is: " << cat1.alive << "\n\n";
    cat1.eat();
    // Of course, the attributes and methods of the "Cat" class can also be used.
    cat1.meow();

    // This way, you don't have to add the "alive" attribute and the "eat()" method to the
    // "Dog" and "Cat" classes individually, you can reuse just one copy of them thanks to inheritance.
    //
    // In general, reusing code where possible is very good practice in programming.

    Cube cube1(10);
    std::cout << "Area of cube1: " << cube1.area << " cm^2\n";
    std::cout << "Volume of cube1: " << cube1.volume << " cm^3\n\n";

    Sphere sphere1(5);
    std::cout << "Area of sphere1: " << sphere1.area << " cm^2\n";
    std::cout << "Volume of sphere1: " << sphere1.volume << " cm^3\n\n";

    return 0;
}







