#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode 
{
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;
    void saveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
    void Gonext2( struct studentNode ***walk ) ;
    
    int main(){
        struct studentNode *start, *now1 ;
        struct studentNode **now2 ;

        start = (struct studentNode *)malloc(sizeof(struct studentNode));
        saveNode(start, "BOB", 15, 'M', 3.22 );

        start->next = (struct studentNode *)malloc(sizeof(struct studentNode));
        saveNode(start->next, "PAM", 15, 'F', 3.50);

        start->next->next = (struct studentNode *)malloc(sizeof(struct studentNode));
        saveNode(start->next->next, "BEN", 18, 'M', 3.70);

        start->next->next->next = (struct studentNode *)malloc(sizeof(struct studentNode));
        saveNode(start->next->next->next, "NEW", 18, 'F', 4.00);
        start->next->next->next->next = NULL;

        now1 = start ;
        now2 = &now1 ;

        Gonext2(&now2);
        printf("Now =  %s\n",(*now2)->name);
        
        return 0;
    }
    void saveNode(struct studentNode *child, char n[], int a, char s, float g){
        strcpy(child->name, n);
        child->age = a ;
        child->sex = s ;
        child->gpa = g ;
    }
    void Gonext2(struct studentNode ***walk){
        *walk = &(**walk)->next;
    }