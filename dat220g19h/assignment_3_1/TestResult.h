//
// Created by Andreas on 02.09.2019.
//

#ifndef ASSIGNMENT_3_1_TESTRESULT_H
#define ASSIGNMENT_3_1_TESTRESULT_H


#include <string>

class TestResult {

    public:
        TestResult();

        int studentId;
        int testId;
        int grade;

};

std::ostream& operator<<(std::ostream& is, const TestResult& result);

std::istream& operator>>(std::istream& is, TestResult& result);



#endif //ASSIGNMENT_3_1_TESTRESULT_H
