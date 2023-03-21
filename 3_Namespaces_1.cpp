#include <iostream>

namespace one {
    int x = 1;
}

namespace two {
    int x = 2;
}

int main() {
    /*
        3 - Namespaces
        
        Namespaces are "declarative regions" which, for example, prevent
        two different entities with identical names from clashing with
        each other by separating them into different groups (namespaces).
    */
    int x = 3;

    std::cout << x << std::endl;      // Prints '3'
    std::cout << two::x << std::endl; // Prints '2'
    std::cout << one::x << std::endl; // Prints '1'

    return 0;
}
