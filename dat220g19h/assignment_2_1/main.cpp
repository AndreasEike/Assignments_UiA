#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int num=-1;
    numbers.begin();

    while (num!=0) {
        std::cout << "Skriv inn et tall: ";
        std::cin >> num;

        if (num !=0) {
            numbers.push_back(num);
        }
    }
    std::sort(numbers.begin(), numbers.end(), std::greater<>());

    double sum=0.0;
    double med=0.0;
    for(auto& n : numbers) {
        sum += n;
    }

    double avg = (double)sum / (double)numbers.size();

    if (numbers.size() % 2 !=0) {
        med = numbers[(numbers.size()) / 2];
    }
    else {
        med = (numbers[(numbers.size()-1) / 2] + numbers[numbers.size()/2]) / 2.0;
    }

    std::cout << "Average : " << avg << std::endl;
    std::cout << "Median : " << med << std::endl;
    std::cout << "Descending : ";
    for(int i=0; i < numbers.size(); i++) {
        std::cout << "" << numbers[i] << " ";
    }





    return 0;
}