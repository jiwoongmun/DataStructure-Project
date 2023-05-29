#include <stdlib.h>
#include <stdio.h>

typedef enum {shirt, jacket, pants, shose} type;

typedef struct list* listpointer;
typedef struct list {
    char data[10];
    listpointer link;
}list;

//4개의 스택 생성
listpointer top[4];

void LLcategorySearch(listpointer clothes[4]) {
    char clothing[10];
    int i;
    listpointer temp;
    temp = (listpointer)malloc(sizeof(list));

    // 불러올 카테고리
    printf("enter in a type of clothing(shirt, jacket, pants, shose): ");
    scanf("%s", clothing);

    // 동일한 카테고리 찾기
    for(i; i<4; i++) {
        //if 문으로 동일한 카테고리를 찾기
        if(clothes[i]->data == clothing) {
            temp = clothes[i];
            while(temp) {
                printf("%s", temp->data);
                temp = temp->link;
            }
            break;
        } //if 
    } // for
}
