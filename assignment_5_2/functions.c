//
// Created by Andreas Høiberg Eike on 13.10.2018.
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

    FILE* f=fopen("student_write.txt","w");


    printf("Please enter your student identification number: ");
    scanf("%i", &studentInfo.studentId);
    fprintf(f, "%i\n",studentInfo.studentId);

    fgetc(stdin); // scanf fjerner ikke "newline" når den er kjørt, og denne "newline" blir plukket opp av fgets. Denne kommandoen fjerner "newline".

    printf("Please enter your name: ");
    fgets(studentInfo.name, STRING_LENGTH, stdin);
    studentInfo.name[strlen(studentInfo.name)-1]=0;
    fprintf(f,"%s\n",studentInfo.name);


    printf("Please enter your age: ");
    scanf("%i", &studentInfo.age);
    fprintf(f,"%i\n",studentInfo.age);


    fclose(f);
    return studentInfo;
};

void writeInfo(student studentInfo) {
    printf("Student id: %i\n",studentInfo.studentId);
    printf("Name: %s\n", studentInfo.name);
    printf("Age: %i\n",studentInfo.age);
}

void readInfo() {
    int c;

    FILE* f=fopen("student_read.txt","r");

    if (!f) {
        printf("Could not open file, exiting program.\n");
    }

    while(!feof(f)) {
        c=fgetc(f);
        if (c!=(-1))
            printf("%c",c);
    }
    printf("\n");

    fclose(f);

}