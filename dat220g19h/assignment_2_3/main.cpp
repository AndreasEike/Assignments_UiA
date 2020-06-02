#include <iostream>
#include <map>

int main() {
    std::string input;
    std::map<std::string, int> wordList;
    int unique=0;
    int total=0;

    while(input!="stop") {
        std::cout << "Enter a word. When you're done, write 'stop'." << std::endl;
        std::cin >> input;
        if (input!="stop") {
            if(wordList.find(input)==wordList.end()) {
                wordList.insert(std::pair<std::string, int>(input, 1));
                unique++;
            }

            else {

                wordList[input]+=1;
            }
            total++;
        }
    }

    std::cout << "Unique : " << unique << std::endl;
    std::cout << "Total : " << total << std::endl;

    for(auto& it : wordList) {
        std::cout << it.first << " : " << it.second << std::endl;
    }

    return 0;
}