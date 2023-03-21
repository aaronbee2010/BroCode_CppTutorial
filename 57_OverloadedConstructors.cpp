#include <iostream>
/*
    57: Constructor overloading

    Overloaded constructors are multiple constructors with the same name but different parameters.

    This allows for varying arguments when instantiating an object.
*/

class Pizza {
    public:
        std::string topping1;
        std::string topping2;
    
        Pizza(std::string myTopping1) { // 1 topping
            topping1 = myTopping1;
        }

        Pizza(std::string myTopping1, std::string myTopping2) { // 2 toppings
            topping1 = myTopping1;
            topping2 = myTopping2;
        }

        Pizza() {} // No toppings

};

int main() {
    Pizza pizza1("Pepperoni"); // 1 topping
    std::cout << pizza1.topping1 << "\n\n";

    Pizza pizza2("Feta", "Green Chillies"); // 2 toppings
    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n\n";

    Pizza pizza3; // No toppings

    return 0;
}