#include "main.h"
#include <iostream>
int main() {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << add(a, b) << std::endl;
    std::cout << "a - b = " << sub(a, b) << std::endl;
    std::cout << "a * b = " << mul(a, b) << std::endl;
    std::cout << "a / b = " << divis(a, b) << std::endl;
    std::cout << GetOne() << std::endl;
    return 0;
}