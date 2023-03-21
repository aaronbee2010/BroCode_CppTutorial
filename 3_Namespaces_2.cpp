#include <iostream>

namespace one {
    int x = 1;
}

namespace two {
    int x = 2;
}

int main() {
    using namespace one;

    std::cout << x << std::endl;
    std::cout << two::x << std::endl;

    return 0;
}
