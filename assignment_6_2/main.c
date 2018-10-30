#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#define STRING_LENGTH 100

int max(student_t student[],int count) {
    int age=0;
    int index=0;

    for (int i=0;i<count;i++) {
        if (student[i].age>age)
            index=i;
    }
    return index;
}

int min(student_t student[],int count) {

    int age=student[0].age;
    int index=0;
    for (int i=0;i<count;i++) {
        if (student[i].age<age)
            index=i;
    }
    return index;
}


int main() {

    int i=0;
    student_t* student;
    student=malloc(5*sizeof(student_t));
    while (1) {
        printf("Skriv inn navnet ditt: ");
        fgets(student[i].name,STRING_LENGTH,stdin);
        student[i].name[strlen(student[i].name)-1]=0;

        if (strcmp(student[i].name,"")==0) {
            printf("No students were given\n");
            return 1;
        }

        if (strcmp(student[i].name,"stop")==0)
            break;

        printf("Skriv inn din alder: ");
        scanf("%i", &student[i].age);
        char ageChar=student[i].age;

        if ((ageChar>=47 && ageChar<=58)) {
            printf("No students were given\n");
            return 1;
        }

        fgetc(stdin);
        i++;
        student=realloc(student, (5 * (i) * sizeof(student_t)));
    }
    printf("Count: %i\n",i);
    for (int a=0; a<i; a++) {
        printf("Name = %s, Age = %i\n", student[a].name, student[a].age);
    }
    printf("Youngest: %s\n", student[min(student,i)].name);
    printf("Oldest: %s\n", student[max(student,i)].name);
    free(student);
    student=NULL;

    return 0;
}