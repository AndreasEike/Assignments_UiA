//
// Created by Andreas on 02.09.2019.
//

#ifndef ASSIGNMENT_3_1_STUDENT_H
#define ASSIGNMENT_3_1_STUDENT_H


#include <string>

class Student {

    public:
        Student();

        int id;
        std::string name;
        std::string email;
};

std::ostream& operator<<(std::ostream& os, const Student& student);

std::istream& operator>>(std::istream& is, Student& student);



#endif //ASSIGNMENT_3_1_STUDENT_H
