#include <iostream>
/*
    54: Enums
    
    Enums (enumerations) are a user-defined data type that consists of
    paired name-integer constants.

    Enums are useful if you have a set of potential options.
*/

// You can use any numbers here. For example, you could start with 1 instead of 0.
enum dayOfWeek {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

// Any values, in any or no order are fine, as long as they're integers and unique.
enum ages {
    mile = 1609,
    kilometre = 1000,
    oneHundredYards = 109
};

// If you don't assign integer values, then the values will start with 0 and go up by 1.
enum iceCream {
    vanilla, // = 0
    chocolate, // = 1
    strawberry, // = 2
    mint // = 3
};

int main() {
    // std::string today = "Tuesday";
    // 
    // switch (today) {
    //     case "Sunday": std::cout << "Today is Sunday!\n\n";
    //     case "Monday": std::cout << "Today is Monday!\n\n";
    //     case "Tuesday": std::cout << "Today is Tuesday!\n\n";
    //     case "Wednesday": std::cout << "Today is Wednesday!\n\n";
    //     case "Thursday": std::cout << "Today is Thursday!\n\n";
    //     case "Friday": std::cout << "Today is Friday!\n\n";
    //     case "Saturday": std::cout << "Today is Saturday!\n\n";
    // }
    /*
        The above switch will NOT work because
        switches only work with ints or enums.
    */

    dayOfWeek today = sunday;

    switch (today) {
        case sunday: std::cout << "Today is Sunday!\n\n"; break;
        case monday: std::cout << "Today is Monday!\n\n"; break;
        case tuesday: std::cout << "Today is Tuesday!\n\n"; break;
        case wednesday: std::cout << "Today is Wednesday!\n\n"; break;
        case thursday: std::cout << "Today is Thursday!\n\n"; break;
        case friday: std::cout << "Today is Friday!\n\n"; break;
        case saturday: std::cout << "Today is Saturday!\n\n"; break;
    }

    // This also works.
    // switch (today) {
    //     case 0: std::cout << "Today is Sunday!\n\n"; break;
    //     case 1: std::cout << "Today is Monday!\n\n"; break;
    //     case 2: std::cout << "Today is Tuesday!\n\n"; break;
    //     case 3: std::cout << "Today is Wednesday!\n\n"; break;
    //     case 4: std::cout << "Today is Thursday!\n\n"; break;
    //     case 5: std::cout << "Today is Friday!\n\n"; break;
    //     case 6: std::cout << "Today is Saturday!\n\n"; break;
    // }

    return 0;
}