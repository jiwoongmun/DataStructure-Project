#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    no children : shirt
    only left children : jacket
    only right children : pants
    2 children : shose
    자리는 만들었지만 빈 node는 empty로 표시
    inorder traversal
*/

enum type{
    shirt, jacket, pants, shose
};

typedef struct node* treepointer;
typedef struct node {
    char data[10];
    treepointer leftchild, rightchild;
}node;

void BTcategorySearch(treepointer ptr) {
    char clothing[10];
    printf("enter in a type of clothing(shirt, jacket, pants, shose): ");
    scanf("%s", clothing);
    switch(enum(type)clothing) {
        case shirt:
        shirtsearch(ptr);
        break;
        
        case jacket:
        jacketsearch(ptr);
        break;

        case pants:
        pantssearch(ptr);
        break;

        case shose:
        shosesearch(ptr);
        break;
    } 

}

void shirtsearch (treepointer ptr) {
    shirtsearch(ptr->leftchild);
    shirtsearch(ptr->rightchild);
    if (ptr->rightchild == ptr->leftchild == NULL && strcmp(ptr->data, "empty")!= 0) {
        print(ptr->data);
    }
}

void jacketsearch (treepointer ptr) {
    jacketsearch(ptr->leftchild);
    jacketsearch(ptr->rightchild);
    if (ptr->rightchild !=NULL && ptr->leftchild == NULL && strcmp(ptr->data, "empty")!= 0) {
        print(ptr->data);
    }
}

void pantssearch (treepointer ptr) {
    pantssearch(ptr->leftchild);
    pantssearch(ptr->rightchild);
    if (ptr->rightchild ==NULL && ptr->leftchild != NULL && strcmp(ptr->data, "empty")!= 0) {
        print(ptr->data);
    }
}

void shoessearch (treepointer ptr) {
    shosesearch(ptr->leftchild);
    shosesearch(ptr->rightchild);
    if (ptr->rightchild !=NULL && ptr->leftchild != NULL && strcmp(ptr->data, "empty")!= 0) {
        print(ptr->data);
    }
}