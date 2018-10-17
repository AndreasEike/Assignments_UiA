#include <stdio.h>
#include "functions.h"

#define STRING_LENGTH 100

int main() {
    struct studentInfo student[1];
    student[0]=getInfo();
    writeInfo(student[0]);
    return 0;
}