//
// Created by Andreas Høiberg Eike on 27.09.2018.
//
#include <stdio.h>
#include <string.h>
#include "functions.h"

void count(char string[]) {
    int counter[26] = {0};
    int i = 0;
    char alfabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while (string[i] != '\0') {

        if (string[i] >= alfabet[0] && string[i] <= alfabet[25]) {

            counter[string[i] - alfabet[0]]++;

        }

        i++;
    }

    for (int x=0; x<26;x++) {

        printf("'%c' : %i\n", alfabet[x], counter[x]);

        }
}