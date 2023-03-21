#include <iostream>

int searchArray(int array[], int size, int element);

int main() {
    /*
        36: Searching for an element within an array
    */
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index; // We'll need to store the index which corresponds to the element we're looking for.
    int myNum; // We'll also need to store the element we're looking for as well.

    std::cout << "Please enter the number you wish to query: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        std::cout << "The element you are looking for was found in index " << index << " of the array.\n";
    } else {
        std::cout << "The element you are looking for could not be found in the array.\n";
    }

    return 0;
}

// This function performs what's known as a linear search. This means that the
// input array will be searched sequentially until a match is found.
int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
    // We're using -1 as the return value because no element in an array has an index with a negative value.
    //
    // -1 is also traditionally designated as the return value given when a function gives a "false" (bool) result.
    // In this case, the false result for our UDF is when the query element is not found in the query array.
}