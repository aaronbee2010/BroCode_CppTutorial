#include <iostream>

int main() {
    /*
        32: sizeof(): Determines the size (in bytes) of a:
                      * Variable
                      * Data type
                      * Class
                      * Object
                      * ...etc...
    */
    int age = 27;
    // Return size of "age" variable (of int type). Here, we get 4 bytes (32-bit).
    std::cout << "The size of the \"age\" int is " << sizeof(age) << " bytes.\n";
    // Return size of the "int" type. We also get 4 bytes here.
    std::cout << "The size of the \"int\" type is " << sizeof(int) << " bytes.\n";    
    
    double gpa = 2.5;
    // Return size of "gpa" variable (of double type). Here, we get 8 bytes (64-bit).
    std::cout << "The size of the \"gpa\" double is " << sizeof(gpa) << " bytes.\n";
    // Return size of the "double" type. We also get 8 bytes here.
    std::cout << "The size of the \"double\" type is " << sizeof(double) << " bytes.\n";

    std::string name = "Aaron";
    // Return size of "name" variable (of string type). Here, we get 32 bytes. (256-bit)
    std::cout << "The size of the \"name\" string is " << sizeof(name) << " bytes.\n";
    // Return size of the "string" type. We also get 32 bytes here.
    std::cout << "The size of the \"string\" type is " << sizeof(std::string) << " bytes.\n";
    // Note that a string really just holds an address to where some text is located.
    // Therefore the address of where the string of text is located is 32 bytes.

    // We can demonstrate this by analysing a much larger string with the sizeof() function.
    std::string lyrics = "Somebody once told me the world was gonna roll me, I ain't the sharpest tool in the shed.";

    // Here, we still get 32 bytes, despite the string being much larger. Again, it's just the
    // size of the address being reported here.
    std::cout << "The size of the \"lyrics\" string is " << sizeof(lyrics) << " bytes.\n";

    char grade = 'F';
    std::cout << "The size of the \"grade\" char is " << sizeof(grade) << " bytes.\n";
    // https://www.asciitable.com/
    // Remember that 1 byte can hold up to 256 different values (each value being a unique combination of 8 bits).
    // As the tables show, each of those values corresponds to a character in the ASCII table. We can therefore represent
    // a character with only 8 bits (1 byte)!

    bool student = true;
    std::cout << "The size of the \"student\" bool is " << sizeof(student) << " bytes.\n";
    // Considering you only need 1 bit to store the two possible values of a bool, 8 bits would obviously be more than
    // enough to store a bool value.

    char grades[] = {'S', 'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout << "The size of the \"grades[]\" char array is " << sizeof(grades) << " bytes.\n";
    // We get 7 bytes here. Each character takes 1 byte of memory, and we have 7 of them, so multiplying
    // the per-element size and the number of elements would give you the total size of the array.

    // If we know the total size of an array and the type of elements it holds, we can determine the number
    // of elements in this array with one simple division:
    //
    // no. of elements = size of array / size of element type
    //                          OR
    // no. of elements = size of array / size of each element
    
    int big[] = {11403, 21862, 24823, 15278, 24308, 13387, 30329, 28519, 27409, 4326, 28231, 4072, 1768, 12400, 9168, 17715, 4611, 14123, 10155, 10857, 13557, 1416, 22961, 10371, 30583, 23241, 4845, 3442, 29235, 13815, 11402, 849, 29672, 31165, 13506, 26329, 31428, 18341, 6339, 2687, 18700, 26297, 6873, 24963, 11729, 7887, 21377, 11357, 3145, 25046, 106, 7031, 23823, 22430, 18305, 26528, 29568, 29987, 27744, 29403, 11186, 26927, 22949, 4414, 28942, 29328, 19770, 4444, 28916, 30726, 22014, 16138, 12475, 15815, 29711, 9657, 6380, 15054, 30976, 25814, 31354, 19805, 12810, 8932, 24222, 18670, 8500, 2978, 29154, 14173, 13197, 7226, 5194, 17619, 5444, 14934, 9430, 12823, 29399, 1346, 1643, 62, 20847, 28202, 19715, 31340, 27612, 6788, 31730, 1802, 8700, 1559, 799, 15267, 31645, 29749, 31795, 20313, 23338, 15068, 9490, 17241, 17942, 15950, 12058, 6991, 3505, 24384, 872, 7803, 22342, 4454, 13267, 6800, 26680, 27145, 17094, 22316, 26652, 24276, 28512, 8608, 30620, 17780, 27060, 12093, 8523, 2789, 11548, 17744, 6234, 23843, 623, 23059, 31951, 28974, 25477, 30581, 16610, 32537, 25041, 11868, 4118, 31223, 11611, 22169, 1879, 9635, 5514, 5109, 15315, 20730, 3967, 21304, 9717, 11799, 14488, 14567, 664, 10674, 25636, 28956, 26587, 20552, 31245, 8891, 15532, 20440, 3430, 14723, 11700, 5803, 25136, 4985, 25200, 5518, 11298, 29017, 32249, 16266, 18797, 9981, 96, 16996, 22826, 18916, 5176, 13374, 15036, 29311, 4529, 32060, 7577, 9399, 12889, 26082, 11605, 19999, 31394, 5011, 19937, 29614, 14138, 23548, 25743, 97, 5326, 31624, 30479, 20715, 15097, 29022, 15126, 15953, 21045, 32218, 13624, 21150, 6682, 1424, 9158, 3297, 9340, 18109, 18365, 15378, 30036, 14891, 294, 22907};
    // Don't fancy counting the number of elements in this array manually? Can't blame you!
    int numInts = sizeof(big) / sizeof(int);
    // NOTE: sizeof(big) / sizeof(big[0]) also works here.
    std::cout << "The \"big[]\" array contains " << numInts << " elements.\n";

    // Another (much simpler) example with strings:
    std::string gen3ou[] = {"Tyranitar", "Skarmory", "Blissey", "Gengar", "Swampert"};
    int numMons = sizeof(gen3ou) / sizeof(gen3ou[0]);
    std::cout << "The \"gen3ou[]\" array contains " << numMons << " elements.\n";







    return 0;
}