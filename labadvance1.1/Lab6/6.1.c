#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct studentNode
{
    char name[50] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;
struct studentNode *AddNode(struct studentNode **walk, char name[], int age, char sex, float gpa);
void InsertNode(struct studentNode *walk, struct studentNode **begin, char name[], int age, char sex, float gpa);
void Goback(struct studentNode **walk);
void Delnode(struct studentNode **walk, struct studentNode **begin);
void showAll( struct studentNode *walk);
int main(){
    struct studentNode *start, *now;
    start = NULL;
    now = AddNode(&start, "one",6, 'M', 3.11);showAll(start);
    now = AddNode(&start, "two",8, 'F', 3.22);showAll(start);
    InsertNode(now,&start, "three",10, 'M', 3.33) ;showAll(start);
    InsertNode(now,&start, "four",12, 'M', 3.44) ;showAll(start);
    Goback(&now);showAll(start);
    Delnode(&now, &start);showAll(start);
    Delnode(&now, &start);showAll(start);
    Delnode(&now, &start);showAll(start);
    return 0;
}
void showAll(struct studentNode *walk){
    while(walk != NULL){
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}
struct studentNode *AddNode(struct studentNode **walk, char name[], int age, char sex, float gpa){
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = NULL;
    newNode->back = NULL;
    if (*walk == NULL) {
        *walk = newNode;
    } else {
        struct studentNode *temp = *walk;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->back = temp;
    }
    return newNode;
}
void InsertNode(struct studentNode *walk, struct studentNode **begin, char name[], int age, char sex, float gpa){
    struct studentNode *newNode = malloc(sizeof(struct studentNode));

    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = walk;
    newNode->back = walk->back;

    if (walk->back != NULL) {
        walk->back->next = newNode;
    } else {
        *begin = newNode;
    }

    walk->back = newNode;
}
void Goback(struct studentNode **walk){
    if ((*walk)->back != NULL) {
        *walk = (*walk)->back;
    }
}
void Delnode(struct studentNode **walk, struct studentNode **begin){
    struct studentNode *temp ;
    if ((*walk)->back != NULL) {
        (*walk)->back->next = (*walk)->next;
    } else {
        *begin = (*walk)->next;
    }

    if ((*walk)->next != NULL) {
        (*walk)->next->back = (*walk)->back;
        temp = (*walk)->next;
    } else {
        temp = (*walk)->back;
    }
     free(*walk);
    *walk = temp;
}

