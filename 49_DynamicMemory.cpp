#include <iostream>
/*
    49: Dynamic memory:
        Memory that is allocated after the program is already compiled & running.
        * Use the "new" operator to allocate memory in the "heap" rather than the "stack".

        This is useful when we don't know how much memory we will need. It therefore makes our programs more
        flexible, especially when accepting user input, as we don't know what the user is going to type in.
    
    To visualise the structure of a program in memory, you can refer to this diagram:
    https://miro.medium.com/max/510/1*T7pQALUpXUV7P8FODwc2Rw.webp
*/
int main() {
    // To allocate a variable within the heap, we do the following:

    // 1. Create a null pointer using the type of the value you want to store where it's pointing to
    //    (when not assigning a value straightaway, you should assign "nullptr" as the value):
    int *pAge = nullptr;
    // 2. We point the pointer to an address in the heap and set the type of the value to match the pointer:
    pAge = new int;
    // 3. We assign a value (matching the type specified previously) to the address the pointer is pointing to.
    *pAge = 27;

    std::cout << "Address: " << pAge << "\n";
    std::cout << "Value: " << *pAge << "\n";

    // It is considered very good practice if not expected from you, whenever you use the "new" operator,
    // to then use the "delete" operator when you're no longer using that memory space.
    delete pAge;
    // If you don't do this, you may cause a memory leak in your program.

    // Here's another example, this time with an array:
    //
    // char *pGrades = nullptr;
    // pGrades = new char[7];
    /*
        When you think about it, if we know what size the array is going to be, then what's the point
        of allocating it in the heap in the first place? As mentioned before, the heap is more appropriate
        for variables whose memory footprint can't be known in advance, i.e. user-inputted values.
        
        In that case, let's ask for some user input, to determine the size of the array:
    */
    int size;
    std::cout << "How many grades do you want to enter? ";
    std::cin >> size;

    char *pGrades = nullptr;
    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade " << i + 1 << ": " << "\n";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << "Grade " << i + 1 << " is " << pGrades[i] << "\n";
    }

    delete[] pGrades;

    return 0;
}

























