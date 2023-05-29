#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    n%4 = 0 : shirt
    n%4 = 1 : jacket
    n%4 = 2 : pants
    n%4 = 3 : shose
*/

char* list[100];

void LcategorySearch(char* list[100]) {
    char clothing[10];
    int i = 0;


    printf("enter in a type of clothing(shirt, jacket, pants, shose): ");
    scanf("%s", clothing);
    
    for(i; i<4; i++) {
        char temp[10];
        strcpy(temp, list[i]);
        if (strcmp(list[i], clothing) == 0) {
            while(temp) {
                printf("%s", list[i]);
                i = i*4;
            }
        }
    }
}