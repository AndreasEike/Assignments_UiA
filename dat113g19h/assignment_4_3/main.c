#include "functions.h"

#define STRING_LENGTH 100

int main() {
    char string1[STRING_LENGTH]={0};
    char string2[STRING_LENGTH]={0};
    getStrings(string1,string2);
    equal(string1,string2);
    search(string1,string2);
    return 0;
}