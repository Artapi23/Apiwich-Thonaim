#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  struct studentNode
  {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode* next;
  };
  void saveNode(struct studentNode* child,char n[], int a, char s, float g);
  void Gonext(struct studentNode** walk);
 int main(){
   struct studentNode *start, *now1, **now2;
   start = (struct studentNode*)malloc(sizeof(struct studentNode));
   saveNode(start,"Alice",20,'F',3.5);

   start->next = (struct studentNode*)malloc(sizeof(struct studentNode));
   saveNode(start->next,"Bob",22,'M',3.7);

   start->next->next = (struct studentNode*)malloc(sizeof(struct studentNode));
   saveNode(start->next->next,"Charlie",21,'M',3.8);    

   start->next->next->next = (struct studentNode*)malloc(sizeof(struct studentNode));
   saveNode(start->next->next->next,"Diana",23,'F',3.9);
   
   start->next->next->next->next = NULL;
   now1 = start;
   now2 = &start;

   Gonext(now2);
   printf("Now - 1 %s\n",(*now2)->name);
    return 0;
 }
 void saveNode(struct studentNode* child,char n[], int a, char s, float g){
   strcpy(child->name,n);
   child->age = a;
   child->sex = s;
   child->gpa = g;
}
void Gonext(struct studentNode** walk){
  *walk = (*walk)->next;
}