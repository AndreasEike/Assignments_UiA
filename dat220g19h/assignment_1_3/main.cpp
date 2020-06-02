#include <iostream>

int main() {

    std::string input;
    std::string inputReverse;
    std::cout << "Enter a word: ";
    std::cin >> input;



    std::cout << "Number of letters: " << input.length() << std::endl;

    for(int i=input.length(); i>=0; i--) {
        inputReverse+=input[i-1];

    }
    inputReverse.erase(inputReverse.length()-1);

    std::cout << input << std::endl;
    std::cout << inputReverse << std::endl;

    if(inputReverse==input) {
        std::cout << input << " is a palindrome." << std::endl;
    }
    else {std::cout << input << " is not a palindrome." << std::endl;}

    return 0;
}