//
// Created by Andreas Høiberg Eike on 13.10.2018.
//

#ifndef ASSIGNMENT_5_2_FUNCTIONS_H
#define ASSIGNMENT_5_2_FUNCTIONS_H

typedef struct studentInfo {
    int studentId;
    char name[100];
    int age;
} student;

student getInfo();
void writeInfo(student studentInfo);
void readInfo();

#endif //ASSIGNMENT_5_2_FUNCTIONS_H
