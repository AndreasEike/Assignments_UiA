#include <stdio.h>
#include <stdlib.h>


int max(int num[],int count) {
    int max=0;
    for (int i=0;i<count;i++) {
        if (num[i]>max)
            max=num[i];
    }
    return max;
}

int min(int num[],int count) {
    int min=num[0];
    for (int i=0;i<count;i++) {
        if (num[i]<min)
            min=num[i];
    }
    return min;
}

int summation(int num[],int count) {
    int sum=0;
    for (int i = 0; i < count; i++)
        sum=sum+num[i];
    return sum;
}

float average(int num[], int count) {
    return (float)(summation(num, count))/count;
}

int cmpfunc(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

float median(int num[], int ARRAY_SIZE) {
    return (float) (num[(ARRAY_SIZE - 1) / 2] + num[ARRAY_SIZE / 2]) / 2;
}
#define ARRAY_SIZE 10

int main() {
    int numbers[ARRAY_SIZE]={0};
    for (int i = 0; i < 10; i++) {
        printf("Skriv inn et tall: ");
        scanf("%i", &numbers[i]);
    }

    printf("Maximum: %i\n", max(numbers,ARRAY_SIZE));
    printf("Minimum: %i\n", min(numbers,ARRAY_SIZE));
    printf("Sum: %i\n", summation(numbers,ARRAY_SIZE));
    printf("Average: %g\n", average(numbers,ARRAY_SIZE));
    qsort(numbers, ARRAY_SIZE, sizeof(int), cmpfunc);
    printf("Sorted: ");
    for (int i =0; i<ARRAY_SIZE;i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n");
    printf("Median: %g\n", median(numbers,ARRAY_SIZE));

    return 0;
}