#include <stdio.h>
#include <string.h>
#include  <ctype.h>

#define STRING_LENGTH 100

int uppercase(char string[]) {
    char uppercaseString[STRING_LENGTH]={0};
    for (int i=0; i<strlen(string)-1;i++)
        uppercaseString[i]=toupper(string[i]);
    printf("The string uppercase is '%s'\n",uppercaseString);
    return 0;
}

int lowercase(char string[]) {
    char lowercaseString[STRING_LENGTH]={0};
    for (int i=0; i<strlen(string)-1;i++)
        lowercaseString[i]=tolower(string[i]);
    printf("The string lowercase is '%s'\n",lowercaseString);
    return 0;
}


int main() {
    char streng[STRING_LENGTH]={0};
    char streng2[STRING_LENGTH]={0};
    char streng3[STRING_LENGTH]={0};
    char streng4[STRING_LENGTH]={0};


    printf("Skriv inn en streng: ");
    fgets(streng,STRING_LENGTH,stdin);


    printf("",uppercase(streng));
    printf("",lowercase(streng));

    if ((strlen(streng)-1)%2==0) {
        for (int i = 0; i < (strlen(streng) / 2); i++)
            streng2[i] = streng[i];

        for (int i = (strlen(streng) / 2); i <= strlen(streng); i++)
            streng3[i - strlen(streng) / 2] = streng[i];

        strcat(streng4, streng2);
        strcat(streng4, " - ");
        strcat(streng4, streng3);
        streng4[strlen(streng4) - 1] = '\0';
        printf("The string split in two is '%s'\n", streng4);

    }
    else {
        for (int i = 0; i < ((strlen(streng)+1) / 2); i++)
            streng2[i] = streng[i];

        for (int i = ((strlen(streng)+1) / 2); i <= strlen(streng); i++)
            streng3[i - (strlen(streng)+1) / 2] = streng[i];

        strcat(streng4, streng2);
        strcat(streng4, " - ");
        strcat(streng4, streng3);
        streng4[strlen(streng4) - 1] = '\0';
        printf("The string split in two is '%s'\n", streng4);
    }



    return 0;
}