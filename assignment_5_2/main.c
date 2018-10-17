#include <stdio.h>
#include "functions.h"

#define STRING_LENGTH 100

int main() {
    int meny=0;
    while (meny!=3) {
        meny=0;
        printf("Skriv inn 1 for å lese student info fra fil.\nSkriv inn 2 for å skrive student informasjon til fil.\nSkriv inn 3 for å avslutte programmet.\n");
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