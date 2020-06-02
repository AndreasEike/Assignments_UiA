#include <iostream>
#include "MyList.h"

int main() {

    MyList<int> intList;
    MyList<std::string> stringList;
    int input=0;
    int intInput = 0;
    std::string stringInput;

    while(input != 8) {

        std::cout << "\n"
                     "1. Add integer (asks for one, then displays the menu again)\n"
                     "2. Show integer at position (ask for position)\n"
                     "3. Remove integer at position (ask for position)\n"
                     "4. Add string (asks for one, then displays the menu again)\n"
                     "5. Show string at position (ask for position)\n"
                     "6. Remove string (ask for position)\n"
                     "7. Print information (see below)\n"
                     "8. Exit" << std::endl;

        std::cin >> input;

        switch(input){

            case 1:
                std::cout << "Enter a integer: " << std::endl;
                std::cin >> intInput;
                intList.pushBack(intInput);
                break;

            case 2:
                std::cout << "Enter a integer: " << std::endl;
                std::cin >> intInput;
                std::cout << "Integer in position " << intInput << ": " << intList[intInput] << std::endl;
                break;

            case 3:
                std::cout << "Enter a integer: " << std::endl;
                std::cin >> intInput;
                intList.remove(intInput);
                break;

            case 4:
                std::cout << "Enter a string: " << std::endl;
                std::cin.ignore();
                std::getline(std::cin, stringInput);
                stringList.pushBack(stringInput);
                break;

            case 5:
                std::cout << "Enter a integer: " << std::endl;
                std::cin >> intInput;
                std::cout << "String in position " << intInput << ": " << stringList[intInput] << std::endl;
                break;

            case 6:
                std::cout << "Enter a integer: " << std::endl;
                std::cin >> intInput;
                stringList.remove(intInput);
                break;

            case 7:

                std::cout << "Got " << intList.size() << " integers: ";
                for (int i = 0; i < intList.size(); i++) {
                    std::cout << intList[i] << " ";
                }

                std::cout << std::endl;

                std::cout << "Got " << stringList.size() << " strings: ";
                for (int i = 0; i < stringList.size(); i++) {
                    std::cout << stringList[i] << " ";
                }
                std::cout << std::endl;
                break;

            case 8:
                break;

            default:
                break;
        }
        intInput=-1;
        stringInput="N/A";
    }

    return 0;
}