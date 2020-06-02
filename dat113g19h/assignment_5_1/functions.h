//
// Created by Andreas Høiberg Eike on 10.10.2018.
//

#ifndef ASSIGNMENT_5_1_FUNCTIONS_H
#define ASSIGNMENT_5_1_FUNCTIONS_H

typedef struct studentInfo {
    int studentId;
    char name[100];
    int age;
} student;

student getInfo();
void writeInfo(student studentInfo);


#endif //ASSIGNMENT_5_1_FUNCTIONS_H
