#include <iostream>

double getTotal(double a[], int b);

int main() {
    /*
        35: Passing an array to a function.
    */
    double prices[] = {39.99, 14.95, 22.50, 420.69};
    int priceCount = sizeof(prices) / sizeof(double);

    double totalPrice = getTotal(prices, priceCount);

    std::cout << "The total price is £" << totalPrice << "\n";

    return 0;
}

// This function will only return the value of the first element in the array and not the total.
// This is because when we pass an array to a function, the array decays into a "pointer" (we'll learn about these later).
//
// Within this function, we're not working with an array anymore, we're working with a pointer that points to the address
// of where the array begins.
//
// This function has no idea how big this array is anymore. We can't calculate how many elements are within this array.

// double getTotal(double a[]) {
//     double t;
//     for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
//         t += a[i];
//     }
//     return t;
// }

// What we can do is calculate the length of the array within the main() function, then pass that value as an additional
// parameter into our getTotal() UDF.
double getTotal(double a[], int b) {
    double t;
    for (int i = 0; i < b; i++) {
        t += a[i];
    }
    return t;
}


