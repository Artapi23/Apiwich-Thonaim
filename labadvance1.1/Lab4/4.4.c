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
    void Gonext( struct studentNode **walk ) ;
    
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

        Gonext(&now1);
        Gonext(now2);
        
        return 0;
    }
    void saveNode(struct studentNode *child, char n[], int a, char s, float g){
        strcpy(child->name, n);
        child->age = a ;
        child->sex = s ;
        child->gpa = g ;
    }
    void Gonext(struct studentNode **walk){
        printf("Name: %s\n",(*walk)->name);
        printf("Age: %d\n",(*walk)->age);
        printf("Sex: %c\n",(*walk)->sex);
        printf("GPA: %.2f\n",(*walk)->gpa);
        *walk = (*walk)->next;
    }