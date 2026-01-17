#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
struct studuntNode
{
    char name[50];
    int age;    
    char sex;
    float gpa;
    struct studuntNode* next;
    struct studuntNode* back;
};
typedef struct studuntNode studuntNode;
void ShowAll(studuntNode *walk);
studuntNode* AddNode(studuntNode **wlak, char name[], int age, char sex, float gpa);
void InsertNode(studuntNode *walk , studuntNode **begin, char name[], int age, char sex, float gpa);
void Delete(studuntNode **walk ,studuntNode **begin);
void Goback(studuntNode **walk);
int main() {
     studuntNode *star, *now;
     star = NULL;
     now = AddNode(&star, "one",6, 'M', 3.5);ShowAll(now);
     now = AddNode(&star, "two",7, 'F', 3.6);ShowAll(now);
     
    InsertNode(now,&star, "tree",5, 'M', 3.4);ShowAll(star);
    InsertNode(now,&star, "four",5, 'M', 3.4);ShowAll(star);
    
    Goback(&now);
    
    Delete(&now,&star); ShowAll(star);
    Delete(&now,&star); ShowAll(star);
    Delete(&now,&star);
    printf("--------------\n");
    ShowAll(star);

    return 0;
}   

void ShowAll(studuntNode *walk){
    while(walk != NULL){
    printf("%s ", walk->name);
    walk = walk->next;
  }
  printf("\n");
}
studuntNode* AddNode( studuntNode **walk, char name[], int age, char sex, float gpa){

  studuntNode *newNode = (studuntNode*)malloc(sizeof(studuntNode));
  strcpy(newNode->name, name);
    newNode->age = age; 
    newNode->sex = sex;
    newNode->gpa = gpa; 
    newNode->next = NULL;
    newNode->back = NULL;
    if (*walk == NULL) {
        *walk = newNode;
    } else {
        studuntNode *temp = *walk ;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return newNode;
}
void InsertNode(studuntNode *walk , studuntNode **begin, char name[], int age, char sex, float gpa){
  if(walk->back != NULL){
    walk->back->next = (studuntNode*)malloc(sizeof(studuntNode));
    strcpy(walk->back->next->name, name);
    walk->back->next->age = age; 
    walk->back->next->sex = sex;
    walk->back->next->gpa = gpa;
    walk->back->next->next = NULL;
    walk->back->next->back = walk->back;
    walk->back = walk->back->next;
  }else{
    *begin = (studuntNode*)malloc(sizeof(studuntNode));
    strcpy((*begin)->name, name);
    (*begin)->age = age; 
    (*begin)->sex = sex;
    (*begin)->gpa = gpa;
    (*begin)->next = walk;
    (*begin)->back = NULL;
    walk->back = *begin;
   }
  }
void Delete(studuntNode **walk ,studuntNode **begin){
    
    if (*walk == NULL || (*walk)->back == NULL) return;
   
   studuntNode *temp;
   if((*walk)->back != NULL){
    temp = (*walk)->back;
    (*walk)->back = (*walk)->back->back;

       if((*walk)->back != NULL){
        (*walk)->back->next = *walk;
       }else{
        (*walk)->back = NULL;
        *begin = *walk;
       }

   }
    free(temp);
}
void Goback(studuntNode **walk){
    if((*walk)->back != NULL){
        *walk = (*walk)->back;
    }
} 