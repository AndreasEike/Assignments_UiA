#include <stdio.h>
#include <string.h>
#include "functions.h"
#define STRING_LENGTH 100

int main() {
    char string[STRING_LENGTH]={0};
    printf("Skriv inn en streng:");
    fgets(string,STRING_LENGTH,stdin);

    string[strlen(string)-1]=0;

    printf("%s\n",string);

    count(string);
    return 0;
}