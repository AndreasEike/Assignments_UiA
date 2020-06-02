#include <iostream>

int main() {
    std::string alphabet="abcdefghijklmnopqrstuvwxyz";
    int count[26]={0};
    std::string input;

    std::cout << "Enter a string: " << std::endl;
    std::getline(std::cin, input);


    for(int i = 0; i < input.length(); i++) {
         for (int j = 0; j < alphabet.length(); j++) {

             if(input[i] == alphabet[j]) {
                 count[j]++;
             }
         }
    }

    for(int i = 0; i < sizeof(count) / sizeof(count[0]) ; i++) {
            std::cout << "'" << alphabet[i] << "' : " << count[i] << std::endl;
    }
        return 0;
}