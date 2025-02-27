#include <iostream>
#include "utils.hpp"

int main() {
    int a = 10, b = 5;

    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Difference: " << subtract(a, b) << std::endl;

    return 0;
}
