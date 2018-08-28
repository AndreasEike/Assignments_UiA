#include <stdio.h>

int main() {
    float num1, num2;
    int teller;
    num2=0;
    teller=0;
    while (num1!=0)
    {
        printf("Skriv inn et tall: ");
        scanf("%f", &num1);
        teller++;
        num2=num2+num1;
    }
    printf("Count: %i\n", teller-1);
    printf("Sum: %g\n", num2);
    printf("Average: %g\n", (num2/(teller-1)));
    return 0;
}