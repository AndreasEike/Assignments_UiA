//
// Created by Andreas Høiberg Eike on 25.09.2018.
//
#include <stdio.h>
#include "functions.h"
#include <string.h>
#define STRING_LENGTH 100

int equal(char string1[], char string2[]){

    if (strcmp(string1,string2))
        printf("are not equal\n");
    else
        printf("are equal\n");

    return 0;
}

int getStrings(char string1[],char string2[]){
    printf("Skriv inn en streng:");
    fgets(string1, STRING_LENGTH, stdin);
    string1[strlen(string1)-1]=0;

    printf("Skriv inn en streng til:");
    fgets(string2, STRING_LENGTH, stdin);
    string2[strlen(string2)-1]=0;
    return string1,string2;
}

int search(char string1[],char string2[]) {
    if (strstr(string1, string2)||strstr(string2,string1))
        printf("is a substring\n");
    else
        printf("is not a substring\n");
}