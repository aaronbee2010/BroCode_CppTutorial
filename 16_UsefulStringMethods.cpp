#include <iostream>
using namespace std;

int main() {
    /*
        16: Useful string methods.

        * length() - Determines the number of characters in a string.
        * empty()  - Returns true if input string is empty, otherwise it will return false.
        * clear()  - Deletes contents of string, but not the string itself.
        * append() - Adds string within parentheses to end of the variable this method is called on.
        * at(n)    - Prints character located at index n within the target string. Note that the first character is located at index 0.
        * insert() - Inserts character or string into target string at a specified index.
        * find()   - Search for first index in target where query character/string is located.
        * erase(i, n)  - Deletes n characters from index i onwards.
    */
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);

    if (name.length() > 50) {
        cout << "That is a long name.\n";
    } else if (name.empty()) {
        cout << "You did not enter a name.\n";
    } else if (name.length() < 5) {
        cout << "That is a short name.\n";
    } else {
        cout << "That is a normal length name.\n";
    }

    string see = "See?";
    see.clear();
    cout << "There is nothing after this full stop. " << see << "\n";
    // Note that the see variable still exists, but it's contents have been cleared.

    see.append("See?");
    cout << "There is now something after this full stop. " << see << "\n";

    string forename = "Johnny";
    cout << "The third letter of Johnny is " << forename.at(2) << ".\n";

    string surname = "Ens";
    surname.insert(1,"va");
    cout << "Johnnys surname is " << surname << ".\n";

    cout << forename.find("n") << "\n"; // "n" is located at indexes 3 & 4, but only the FIRST index with a match is outputted.

    string middlename = "Steveness";
    middlename.erase(6, 2);
    cout << "Johnnys middle name is " << middlename << ".\n";

    cout << "\n";
    return 0;
}