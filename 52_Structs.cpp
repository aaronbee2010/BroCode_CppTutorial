#include <iostream>
/*
    52 - Structs: A structure that groups related variables under one name.

    Think of an array. An array can store multiple values, but only of the same data type.
    In contrast, structs can store multiple values of different data types, i.e. string, int, double, bool etc.

    Variables in a struct are known as "members".

    Members can have default values set.

    Members can be accessed with "." (Class Member Access Operator).
    
*/
struct student{
    std::string name;
    double mark;
    bool enrolled = true; // The default value is set to "true".
};

int main() {
    student student1;
    student1.name = "Aaron Bee";
    student1.mark = 75.6;
    student1.enrolled = false;

    student student2;
    student2.name = "Ishi Mayell";
    student2.mark = 69.1;
    student2.enrolled = true;

    student student3;
    student3.name = "Navel Sard";
    student3.mark = 67.8;
    // student3.enrolled = true; // We don't need to state this explicitly as "true" is the default value here.

    std::cout << student1.name << "\n";
    std::cout << student1.mark << "\n";
    std::cout << student1.enrolled << "\n\n";
    // This outputs 0, which corresponds to "false".

    std::cout << student2.name << "\n";
    std::cout << student2.mark << "\n";
    std::cout << student2.enrolled << "\n\n";
    // This outputs 1, which corresponds to "true".

    std::cout << student3.name << "\n";
    std::cout << student3.mark << "\n";
    std::cout << student3.enrolled << "\n\n";

    return 0;
}








