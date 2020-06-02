//
// Created by Andreas on 02.09.2019.
//

#include <vector>
#include <iostream>
#include <map>
#include "Student.h"
#include "Test.h"
#include "TestResult.h"

std::map<int, Student> studentMap;
std::map<int, Test> testMap;
std::map<std::pair<int, int>, TestResult> testResultMap;

//Student functions
void printStudents() {
    std::cout << "Student details: " << std::endl;
    for(const auto& n : studentMap) {
        std::cout << n.second << std::endl;
    }
    std::cout << std::endl;
}

void addStudent(const int& counter) {
    std::cout << "Please enter (in order) the students name and email address." << std::endl;
    Student student;
    std::cin >> student;
    student.id=counter;
    studentMap[counter]=student;
}

void editStudent() {
    if(!studentMap.empty()) {
        int input = 0;
        int back = int(studentMap.size() + 1);
        std::cout << "Which student do you want to edit? Enter the id of the student to edit. Press " << back << " to exit." << std::endl;

        std::cin >> input;
        if (input <= studentMap.size() && input >= 1) {
            addStudent(input);
            std::cout << "Student edited." << std::endl;
        }

    }

    else {
        std::cout << "No students on record. Going back to menu." << std::endl;
    }

}

void removeStudent() {
    if(!studentMap.empty()) {
        int input = 0;
        int back=int(studentMap.size()+1);
        std::cout << "Which student do you want to remove? Enter the id of the student to remove. Press " << back << " to exit." << std::endl;

        std::cin >> input;
        if (input <= studentMap.size() && input >= 1) {
            studentMap.erase(input);
            std::cout << "Student " << input << " removed." << std::endl;

            for(int i=0; i < int(testMap.size()); i++) {
                testResultMap.erase(std::make_pair(input, i));
            }
        }

    }

    else {
        std::cout << "No students on record. Going back to menu." << std::endl;
    }

}
//----------------------------------------------------------

//Test functions

void printTests() {
    std::cout << "Test details: " << std::endl;
    for(const auto& n : testMap) {
        std::cout << n.second << std::endl;
    }
}

void addTest(const int& counter) {
    std::cout << "Please enter (in order) the course name, test name and the date of the test." << std::endl;
    Test test;
    std::cin >> test;
    test.id=counter;
    testMap[counter]=test;
}

void editTest() {

    if(!testMap.empty()) {
        int input = 0;
        int back = int(testMap.size() + 1);
        std::cout << "Which test do you want to edit? Enter the id of the test to edit. Press " << back << " to exit." << std::endl;

        std::cin >> input;
        if (input <= testMap.size() && input >= 1) {
            addTest(input);
            std::cout << "Test edited." << std::endl;
        }

    }

    else {
        std::cout << "No tests on record. Going back to menu." << std::endl;
    }

}

void removeTest() {

    if(!testMap.empty()) {
        int input = 0;
        int back = int(testMap.size() + 1);
        std::cout << "Which test do you want to remove? Enter the id of the test to remove. Press " << back << " to exit." << std::endl;

        std::cin >> input;
        if (input <= testMap.size() && input >= 1 && input != back) {
            testMap.erase(input);
            std::cout << "Test removed." << std::endl;
        }
    }

    else {
        std::cout << "No tests on record. Going back to menu." << std::endl;
    }
}
//----------------------------------------------------------

//Test Result functions
void printTestResults() {
    std::cout << "Test Result details: " << std::endl;
    for(const auto& n : testResultMap) {

        int sid = n.second.studentId;
        int tid = n.second.testId;
        std::string cname = testMap[tid].courseName;
        std::string tname = testMap[tid].testName;
        int grade = n.second.grade;

        std::cout << "student id = " << sid << ", course name = " << cname << ", test id = " << tid << ", test name = " << tname << ", grade = " << grade << std::endl;


    }
}

void addTestResult() {
    int back = int(testMap.size() + 1);
    int input1=0;
    int input2=0;
    std::cout << "Please enter (in order) the student id, test id and the students grade. Press " << back << " to go back." << std::endl;
    std::cin >> input1;

    if(input1 != back) {
        std::cin >> input2;
        if(input2 != back) {
            TestResult testResult;
            std::cin >> testResult;
            int sid = input1;
            testResult.studentId = input1;

            int tid = input2;
            testResult.testId=input2;

            testResultMap[std::make_pair(sid, tid)] = testResult;
        }
    }
}

void removeTestResult() {
    if(!testResultMap.empty()) {
        int input1 = 0;
        int input2 = 0;
        int back = int(testResultMap.size() + 1);
        std::cout << "Which test result do you want to remove? Enter the id of the test result to remove. Press " << back << " to exit." << std::endl;

        std::cin >> input1;
        if (input1 <= testResultMap.size() && input1 >= 1 && input1!= back) {

            std::cin >>input2;

            if(input2 <= testResultMap.size() && input2 >= 1) {
                testResultMap.erase(std::make_pair(input1, input2));
                std::cout << "Test result removed." << std::endl;
            }

        }
    }

    else {
        std::cout << "No tests on record. Going back to menu." << std::endl;
    }
}
//----------------------------------------------------------


void printAll() {

    printStudents();

    printTests();

    printTestResults();

}