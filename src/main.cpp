#include <iostream>
#include "utils.hpp"

int main() {
    int a = 10, b = 5;

    std::cout << "Результат сложения: " << add(a, b) << std::endl;
    std::cout << "Результат вычитания: " << subtract(a, b) << std::endl;
    std::cout << "Результат умножения: " << multiply(a, b) << std::endl;

    return 0;
}
