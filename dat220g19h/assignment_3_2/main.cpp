#include <iostream>
#include "SuperMath.h"

int main() {

    double input1, input2 = 0;
    std::cout << "Enter two numbers." << std::endl;
    std::cin >> input1;
    std::cin >> input2;

    std::cout << "Add: " << add(input1, input2) << std::endl;
    std::cout << "Sub: " << subtract(input1, input2) << std::endl;
    std::cout << "Mul: " << multiply(input1, input2) << std::endl;
    std::cout << "Div: " << divide(input1, input2) << std::endl;

    return 0;
}