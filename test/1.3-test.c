#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct studentNode{
   char name[50];
   int age;
   char sex;
   float gpa;
 struct studentNode* next;
 };
typedef struct studentNode studentNode;

studentNode* AddNode( studentNode **start, char name[], int age, char sex, float gpa);
void InsertNode(studentNode **now, char name[], int age, char sex, float gpa);
void Delete(studentNode **start);
void ShowAll(studentNode *walk);
int main() {
  studentNode *start, *now;
  start = NULL;
 now = AddNode(&start, "one",6, 'M', 3.5);ShowAll(start);
 now = AddNode(&start, "two",7, 'F', 3.6);ShowAll(start);
 InsertNode(&now, "tree",5, 'M', 3.4);ShowAll(start);
 InsertNode(&now, "four",5, 'M', 3.4);ShowAll(start);
 Delete(&now);ShowAll(start);

    return 0;
}
studentNode* AddNode( studentNode **start, char name[], int age, char sex, float gpa){
  studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));
  strcpy(newNode->name, name);
    newNode->age = age; 
    newNode->sex = sex;
    newNode->gpa = gpa; 
    newNode->next = NULL;
    if (*start == NULL) {
        *start = newNode;
    } else {
        studentNode *temp = *start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return newNode;
}
void InsertNode(studentNode **now, char name[], int age, char sex, float gpa){
  studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));
    strcpy(newNode->name, name);
    newNode->age = age; 
    newNode->sex = sex;
    newNode->gpa = gpa; 
    newNode->next = NULL;
    newNode->next = (*now)->next;
    (*now)->next = newNode;
}
void Delete(studentNode **start){
     studentNode *temp = *start;
    while (temp->next->next->next != NULL) {
        temp = temp->next;
    }
    studentNode *nodeToDelete = temp->next;
    temp->next = temp->next->next;
}
void ShowAll(studentNode *walk){
  while(walk != NULL){
    printf("%s ", walk->name);
    walk = walk->next;
  }
  printf("\n");
}