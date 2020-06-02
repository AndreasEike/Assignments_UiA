//
// Created by Andreas on 02.09.2019.
//

#include <iostream>
#include "Test.h"

Test::Test() {
    id=-1;
    courseName="N/A";
    testName="N/A";
    date="N/A";
}

std::ostream& operator<<(std::ostream& os, const Test& test) {
    os << "test id = " << test.id << ", course name = " << test.courseName << ", test name = " << test.testName << ", date = " << test.date;
    return os;
}

std::istream& operator>>(std::istream& is, Test& test) {
    is >> test.courseName;

    std::cin.ignore();
    std::getline(is, test.testName);

    is >> test.date;
    return is;
}