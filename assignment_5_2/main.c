#include <stdio.h>
#include "functions.h"

#define STRING_LENGTH 100

int main() {
    int meny=0;
    while (meny!=3) {
        meny=0;
        printf("Enter 1 to read student info from file.\nEnter 2 to write student info to file.\nEnter 3 to exit the program.\n");
        scanf("%i", &meny);

        switch(meny) {
            case 1:
                readInfo();
                break;


            case 2:
                getInfo();
                break;


            case 3:
                printf("Avslutter program.\n");
                return 0;

            default:
                printf("Error: input was not a number. Exiting program.\n");
                return 1;

            }
        }
    return 0;
}