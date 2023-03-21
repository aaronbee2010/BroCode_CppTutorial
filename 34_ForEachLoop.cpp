#include <iostream>

int main() {
    /*
        34: For each loop: A loop that eases the traversal over an iterable data set.
    */

    
    std::string gen3ou[] = {"Tyranitar", "Skarmory", "Blissey", "Gengar", "Swampert"};

    // Let's look at a standard for loop:
    int numMons = sizeof(gen3ou) / sizeof(gen3ou[0]);
    for (int i = 0; i < numMons; i++) {
        std::cout << "Element " << (i + 1) << ": " << gen3ou[i] << "\n";
    }
    // This is fine, but there's a different way to do this:
    int monNum = 1;
    for (std::string mon : gen3ou) {
        std::cout << "Element " << monNum << ": " << mon << "\n";
        monNum++;
    } // Even defining the index itself is simpler, as we can just set it to 1 then increment it within the loop.

    // If you only need to print the element and not its corresponding index, you can save even more typing:

    numMons = sizeof(gen3ou) / sizeof(gen3ou[0]);
    for (int i = 0; i < numMons; i++) {
        std::cout << gen3ou[i] << "\n";
    } // We still need to define an index within the parentheses of the for loop even if we're not printing it.

    for (std::string mon : gen3ou) {
        std::cout << mon << "\n";
        monNum++;
    } // Here, we don't need to define an index if we're not printing it.
      // Even if we did need to, defining it would be easier.

    // As you can see, this for each loop requires less typing (especially if you only need the element and not
    // its corresponding index) but it has it's limitations, i.e:
    // * You can only go forward by one element (as opposed to going backwards, looking at EVERY OTHER element, or both)

    // Here's another example:
    int grades[] = {65, 72, 81, 93};

    for (int grade : grades) {
        std::cout << grade << "\n";
    }



    return 0;
}