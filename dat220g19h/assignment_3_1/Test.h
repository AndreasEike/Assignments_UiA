//
// Created by Andreas on 02.09.2019.
//

#ifndef ASSIGNMENT_3_1_TEST_H
#define ASSIGNMENT_3_1_TEST_H


#include <string>

class Test {

    public:
        Test();

        int id;
        std::string courseName;
        std::string testName;
        std::string date;

};

std::ostream& operator<<(std::ostream& os, const Test& test);

std::istream& operator>>(std::istream& is, Test& test);


#endif //ASSIGNMENT_3_1_TEST_H
