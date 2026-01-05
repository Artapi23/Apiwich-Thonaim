#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode{
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

struct studentNode *AddNode(struct studentNode **walk, char *name, int age, char sex, float gpa);
void ShowAll(struct studentNode *walk) ;
void InsNode(struct studentNode *walk, char *name, int age, char sex, float gpa) ;
void DelNode(struct studentNode *walk) ;

int main(){
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11) ; ShowAll(start) ;
    now = AddNode( &start, " two", 8, 'F', 3.22) ; ShowAll(start) ;
    InsNode( now, " three", 10, 'M', 3.33) ; ShowAll(start) ;
    InsNode( now, " four", 12, 'F', 3.44) ; ShowAll(start) ;
    DelNode(now) ; ShowAll(start) ;
    return 0 ;
}

struct studentNode *AddNode(struct studentNode **walk, char *name, int age, char sex, float gpa){
    while(*walk != NULL){
        walk = &(*walk)->next ;
    }
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;
    *walk = newNode ;
    (*walk)->next = NULL ;
    strcpy((*walk)->name , name) ;
    (*walk)->age = age ;
    (*walk)->sex = sex ;
    (*walk)->gpa = gpa ; 
    return *walk ;
}
void InsNode(struct studentNode *walk, char *name, int age, char sex, float gpa){
    if (walk == NULL) return ;
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;
    strcpy(newNode->name , name) ;
    newNode->age = age ;
    newNode->sex = sex ;
    newNode->gpa = gpa ; 
    newNode->next = walk->next ;
    walk->next = newNode ;
}

void DelNode(struct studentNode *walk){
    if (walk == NULL || walk->next == NULL) return;
    struct studentNode *temp = walk->next; 
    walk->next = temp->next; 
    free(temp); 
}
void ShowAll(struct studentNode *walk){
    while(walk != NULL){
        printf("%s", walk->name) ;
        walk = walk->next ;
    }
    printf("\n") ;
}
