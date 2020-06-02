#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a word: ";
    std::getline(std::cin, input);

    std::cout << input << std::endl;

    char inputUpper[input.length()];
    char inputLower[input.length()];

    for (int i = 0; i < input.length()+1; i++) {
        inputUpper[i] = toupper(input[i]);
    }

    for(int i=0; i < input.length()+1; i++) {
        inputLower[i] = tolower(input[i]);
    }

    std::cout << inputUpper << std::endl;
    std::cout << inputLower << std::endl;

    for(int i = 0; i<input.length()/2;i++) {
        std::cout << input[i];
    }

    std::cout << " - ";

    for(int i=input.length()/2; i<input.length();i++) {
        std::cout << input[i];
    }

    std::cout << "" << std::endl;

    std::stringstream stringInt(input);
    std::stringstream stringDouble(input);


    int x=0;
    double t=0;
    stringInt >> x;
    stringDouble >> t;

    std::cout << "String to integer is " << x << std::endl;

    std::cout << "Square of integer is " << x*x <<std::endl;

    std::cout << "String to double is " << t << std::endl;

    std::cout << "Half of double is " << t/2 << std::endl;



    return 0;
}