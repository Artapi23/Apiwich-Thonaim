#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};
class LinkedList {
    protected:
    struct studentNode *start, *now;
    public:
        LinkedList();
        ~LinkedList();
        void InsNode(const char name[], int age, char sex, float gpa);
        void GoNext();
        virtual void ShowNode();
        void DelNode();
};
class NewList : public LinkedList {
    public:
    void GoFirst();
    virtual void ShowNode();
};
LinkedList::LinkedList() {
    start = NULL;
    now = NULL;
}
LinkedList::~LinkedList() {
    while(start != NULL) {
        studentNode *temp = start;
        start = start->next;
        free(temp);
    }
}
int main() {
    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    listA.InsNode( "one",1,'A',1.1 );
    listA.InsNode( "two",2,'B',2.2 );
    listA.InsNode( "three",3,'C',3.3 );
    listA.GoNext();
    listA.ShowNode();

    listB.InsNode( "four",4,'D',4.4 );
    listB.InsNode( "five",5,'E',5.5 );
    listB.InsNode( "six",6,'F',6.6 );
    listB.GoNext();
    listB.DelNode();
    listB.ShowNode();

    listC = &listA;
    listC->GoNext();
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode();

    return 0;
}
void LinkedList::InsNode(const char name[], int age, char sex, float gpa) {
    studentNode *newNode = (studentNode*)malloc(sizeof(studentNode));

    strcpy(newNode ->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = NULL;

    if(start == NULL) {
        start = newNode;
        now = start;
    } else {
        studentNode *temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void LinkedList::GoNext() {
    if(now != NULL) {
        now = now->next;
    }
}
void LinkedList::DelNode() {
    if(now == NULL) {
        return;
    }

    if(now == start) {
        start = start->next;
        free(now);
        now = start;
    } else {
        studentNode *temp = start;
        while(temp->next != now) {
            temp = temp->next;
        }
        temp->next = now->next;
        free(now);
        now = temp->next;
    }
}
void NewList::GoFirst() {
    now = start;
}
void LinkedList::ShowNode() {
    if(now != NULL) {
        printf("%s %d %c %.2f\n",now->name, now->age, now->sex, now->gpa);
    }
}
void NewList::ShowNode() {
    if(now != NULL) {
        printf("%s %d %.2f\n",now->name, now->age, now->gpa);
    }
}