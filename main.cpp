#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> x;
    std::cout << x.front() << std::endl;
    std::cout << x.back() << std::endl;
    std::cout << x[0] << std::endl;
    std::cout << x.at(0) << std::endl;

    return 0;
}
