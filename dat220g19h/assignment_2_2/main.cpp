#include <iostream>
#include <map>
#include <fstream>
#include <vector>

int main() {
    std::ifstream ifstream;
    std::vector<std::string> strings;
    std::map<std::string, std::string> countries;

    ifstream.open("countries.txt", std::ifstream::in);

    std::string output;

    while(getline(ifstream, output)) {
        strings.push_back(output);
    }

    for(int i = 0; i < strings.size(); i+=2) {
        countries.insert(std::pair<std::string, std::string> (strings[i], strings[i+1]));
    }

    ifstream.close();
    int input=-1;

    std::cout << "Welcome. Press 1 for search by country code, or press 2 for search by country name. Press 0 to close." << std::endl;
        std::cin >> input;
        std::string in;
        if (input==0){
            return 0;
        }
        if(input==1) {
            std::cout << "Enter a country code: ";
            std::cin >>in;
            std::cout << countries.find(in)->second << std::endl;
        }

        else {
            std::cout << "Enter a country name: ";
            std::cin >>in;
            for (auto it = countries.begin(); it != countries.end(); it++) {
                if(it->second == in) {
                    std::cout << it->first << std::endl;
                }
            }
        }
    return 0;
}