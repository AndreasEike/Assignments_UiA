#include <iostream>

int main() {

    std::string name;
    int age;
    int currentYear=2019;

    std::cout << "Hello! What is your name?" << std::endl;

    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << name << ", How old are you?" << std::endl;

    std::cin >> age;

    std::cout << "You were born in the year " << (currentYear-age) << std::endl;

    std::cout << "You will be 100 years in " << 100-age << " years." << std::endl;


    return 0;
}