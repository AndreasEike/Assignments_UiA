#include <iostream>
#include <vector>
#include "Student.h"

int main() {

    std::vector<Student> studentList;
    std::string inputName;
    std::string courseCode;
    char grade;
    while(inputName!="stop") {
        courseCode="";
        std::cout << "Enter the students name: ";
        std::cin >> inputName;

        if(inputName!="stop") {
            Student newStudent;
            newStudent.name=inputName;

            while (courseCode != "stop") {
                std::cout << "Enter the course code: ";
                std::cin >> courseCode;

                if(courseCode!="stop") {
                    std::cout << "Enter the grade: ";
                    std::cin >> grade;

                    newStudent.course[courseCode]=grade;
                }
            }
            studentList.push_back(newStudent);
        }
    }
    for(int i = 0; i < studentList.size(); i++) {
        studentList[i].print();
    }


    return 0;
}