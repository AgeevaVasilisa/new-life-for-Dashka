#include <iostream>
#include "utils.hpp"

int main() {
    int a = 10, b = 5;

    std::cout << "��������� ��������: " << add(a, b) << std::endl;
    std::cout << "��������� ���������: " << subtract(a, b) << std::endl;
    std::cout << "��������� ���������: " << multiply(a, b) << std::endl;

    return 0;
}
