#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void* a, const void* b) {

    return(*(int*)a - *(int*)b);

}

int main() {
    int count;

    printf("Hvor mange heltall skal du skrive inn?\n");
    scanf("%i", &count);
    char countChar=count;
    if (count==0 || (countChar>=47 && countChar<=58)) {
        printf("No numbers were given");
        return 1;
    }

    int* pNumbers=malloc(count* sizeof(int));

    for (int i=0; i<count; i++){

        printf("Skriv inn et tall: ");
        scanf("%i", &pNumbers[i]);

    }

    printf("Count: %i\n",count);


    printf("Numbers: ");
    for (int i=0; i<count; i++) {
        printf("%i ",pNumbers[i]);
    }

    printf("\n");
    printf("Sorted: ");
    qsort(pNumbers, count, sizeof(int), cmpfunc);
    for (int i=0; i<count; i++){

        printf("%i ",pNumbers[i]);

    }

    free(pNumbers);
    pNumbers=NULL;

    return 0;

}