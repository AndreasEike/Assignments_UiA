//
// Created by Andreas on 02.09.2019.
//

#include <iostream>
#include "Student.h"

Student::Student() {
    id=-1;
    name="N/A";
    email="N/A";
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "student id = " << student.id << ", name = " << student.name << ", email = " << student.email;
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) {
    std::cin.ignore();
    std::getline(is, student.name);
    is >> student.email;
    return is;
}