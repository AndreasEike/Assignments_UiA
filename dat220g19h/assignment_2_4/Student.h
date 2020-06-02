//
// Created by Andreas Høiberg Eike on 2019-08-29.
//

#ifndef ASSIGNMENT_2_4_STUDENT_H
#define ASSIGNMENT_2_4_STUDENT_H
#include <string>
#include <map>


class Student {
    public:
        void print() const;
        int id;
        std::string name;
        std::map<std::string, char> course;



};


#endif //ASSIGNMENT_2_4_STUDENT_H
