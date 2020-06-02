#include <stdio.h>
#include <string.h>
#include  <ctype.h>

#define STRING_LENGTH 100

//Kunne ikke inkludere <stdbool.h>, derfor returnerer funksjonen 1 eller 0 i stedet, som er tilsvarende boolske verdier.
int reverseCheck(char ord[]) {
    for (int i=0;i<strlen(ord)/2;i++){
        if(ord[i]==ord[strlen(ord)-i-1])
            return 1;
        else
            return 0;
            break;
    }
}
void reverse(char ord[]) {
    char reverseOrd[STRING_LENGTH] = {0};
    printf("The word reversed is '");

    for (int i = strlen(ord) - 1; i >= 0; i--) {
        printf("%c", ord[i]);
        reverseOrd[strlen(ord) - i - 1] = ord[i];
    }
    printf("'\n");

}

int main() {
    char ord[STRING_LENGTH]={0};
    printf("Skriv inn et ord: ");
    fgets(ord,STRING_LENGTH,stdin);
    ord[strlen(ord)-1]=0;

    printf("The word contains %i letters\n",strlen(ord));

    reverse(ord);
    if (reverseCheck(ord)==1)
        printf("The word is a palindrome");
    else
        printf("The word is not a palindrome");

    return 0;
}