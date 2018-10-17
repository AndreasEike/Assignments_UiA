//
// Created by Andreas Høiberg Eike on 10.10.2018.
//

#include "functions.h"
#include <string.h>
#include <stdio.h>

#define STRING_LENGTH 100

student initStudentInfo(char studentName[]) {
    student studentInfo;
    studentInfo.age=0;
    studentInfo.studentId=0;
    strcpy(studentInfo.name,studentName);


}

student getInfo() {
    student studentInfo=initStudentInfo("");

    printf("Please enter your student identification number: ");
    scanf("%i", &studentInfo.studentId);

    fgetc(stdin); // scanf fjerner ikke "newline" når den er kjørt, og denne "newline" blir plukket opp av fgets. Denne kommandoen fjerner "newline".

    printf("Please enter your name: ");
    fgets(studentInfo.name, STRING_LENGTH, stdin);
    studentInfo.name[strlen(studentInfo.name)-1]=0;


    printf("Please enter your age: ");
    scanf("%i", &studentInfo.age);

    return studentInfo;
};

void writeInfo(student studentInfo) {
    printf("Student id: %i\n",studentInfo.studentId);
    printf("Name: %s\n", studentInfo.name);
    printf("Age: %i\n",studentInfo.age);
}