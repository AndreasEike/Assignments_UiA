//
// Created by Andreas on 02.09.2019.
//

#include <iostream>
#include "TestResult.h"

TestResult::TestResult() {
    studentId=-1;
    testId=-1;
    grade='-';
}

std::istream& operator>>(std::istream& is, TestResult& testResult) {
    is >> testResult.grade;
    return is;
}