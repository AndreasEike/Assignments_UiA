#include <iostream>
#include "Student.h"
#include "Test.h"
#include "TestResult.h"
#include "functions.h"


int main() {

    int input=0;
    int studentCounter=1;
    int testCounter=1;


    while(input != 10) {

        std::cout << "Please choose:\n"
                     "\n"
                     "1. Add student\n"
                     "2. Edit student\n"
                     "3. Remove student\n"
                     "\n"
                     "4. Add test\n"
                     "5. Edit test\n"
                     "6. Remove test\n"
                     "\n"
                     "7. Add / edit test result\n"
                     "8. Remove test result\n"
                     "9. Show all info\n"
                     "10. Exit\n";

        std::cin >> input;


        switch (input) {

            case 1: addStudent(studentCounter++);
                    break;

            case 2: editStudent();
                    break;

            case 3: removeStudent();
                    break;

            case 4: addTest(testCounter++);
                    break;

            case 5: editTest();
                    break;

            case 6: removeTest();
                    break;

            case 7: addTestResult();
                    break;

            case 8: removeTestResult();
                    break;

            case 9: printAll();
                    break;

            default: break;

        }

    }

    return 0;
}