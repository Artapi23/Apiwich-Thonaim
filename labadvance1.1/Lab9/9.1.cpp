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
    struct studentNode *start, **now;
public:
    LinkedList() ;
    ~LinkedList();
    void InsNode(char n[], int a, char s, float g);
    void DelNode();
    void GoFirst();
    void GoNext();
    void ShowAll();
    int FindNode(char n[]);
    struct studentNode *NowNode();
    void EditNode(char n[], int a, char s, float g);
};

void EditData(LinkedList *ll);
void AddData(LinkedList *ll);
void FindData(LinkedList *ll);
void readfile(LinkedList *ll);
void writefile(LinkedList *ll);

int main() {
    LinkedList lista;
    int menu;
    readfile(&lista);
    printf("  Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit :") ;
    scanf("%d", &menu);
    while( menu != 0){
        switch(menu){
            case 1 : AddData(&lista); break;
            case 2 : EditData(&lista) ; break ;
            case 3 : lista.DelNode() ; break ;
            case 4 : FindData(&lista) ; break ;
            case 5 : lista.ShowAll() ; break ;
    
    }
    printf("  Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit :") ;
    scanf("%d", &menu);
    }
    writefile(&lista);
    return 0;
}
LinkedList::LinkedList() {
    start = NULL;
    now = &start;
}
LinkedList::~LinkedList() {
    while(start != NULL) {
        struct studentNode *temp = start;
        start = start->next;
        free(temp);
    }
}
void LinkedList::InsNode(char n[], int a, char s, float g) {
    struct studentNode *newNode = (struct studentNode*)malloc(sizeof(struct studentNode));
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = *now;
    *now = newNode;
}
void LinkedList::DelNode() {
    if (*now != NULL) {
        struct studentNode *temp = *now;
        *now = (*now)->next;
        free(temp);
        printf("Deleted successfully.\n");
    }
}
void LinkedList::GoFirst() {
    now = &start;
}
void LinkedList::GoNext() {
    if (*now != NULL) {
        now = &((*now)->next);
    }
}
void LinkedList::ShowAll() {
    struct studentNode *temp = start;
    printf("\n--- Student List ---\n");
    while (temp != NULL) {
        printf("Name: %-15s | Age: %d | Sex: %c | GPA: %.2f\n", temp->name, temp->age, temp->sex, temp->gpa);
        temp = temp->next;
    }
}

int LinkedList::FindNode(char n[]) {
    GoFirst();
    while (*now != NULL) {
        if (strcmp((*now)->name, n) == 0) return 1 ;
        GoNext();
    }
    return 0;
}
struct studentNode *LinkedList::NowNode() {
    return *now;
}
void LinkedList::EditNode(char n[], int a, char s, float g) {
    strcpy((*now)->name, n);
    (*now)->age = a;
    (*now)->
    sex = s;
    (*now)->gpa = g;
}

void AddData(LinkedList *ll) {
    char n[20], s;
    int a;
    float g;
    printf("Enter Name: "); scanf("%s", n);
    printf("Enter Age: "); scanf("%d", &a);
    printf("Enter Sex (M/F): "); scanf(" %c", &s);
    printf("Enter GPA: "); scanf("%f", &g);
    ll->GoFirst();
    ll->InsNode(n, a, s, g);
}

void EditData(LinkedList *ll) {
    char target[20], n[20], s;
    int a;
    float g;
    printf(" Edit Data: "); scanf("%s", target);
    if (ll->FindNode(target)) { 
        printf("New Name: "); scanf("%s", n);
        printf("New Age: "); scanf("%d", &a);
        printf("New Sex: "); scanf(" %c", &s);
        printf("New GPA: "); scanf("%f", &g);
        ll->EditNode(n, a, s, g);
    } else printf("Not found!\n");
}

void FindData(LinkedList *ll) {
    char target[20];
    printf("Enter name to find: "); scanf("%s", target);
    if (ll->FindNode(target)) {
        struct studentNode *curr = ll->NowNode();
        printf("Found! -> Name: %s, Age: %d, GPA: %.2f\n", curr->name, curr->age, curr->gpa);
    } else printf("Not found!\n");
}

void readfile(LinkedList *ll) {
    FILE *fp = fopen("student.dat", "r");
    if (fp == NULL) return;
    char n[20], s;
    int a;
    float g;
    while (fscanf(fp, "%s %d %c %f", n, &a, &s, &g) != EOF) {
        ll->InsNode(n, a, s, g);
    }
    fclose(fp);
}

void writefile(LinkedList *ll) {
    FILE *fp = fopen("student.dat", "w");
    if(fp == NULL) return;

    ll->GoFirst();
    while(ll->NowNode() != NULL) {
        struct studentNode *curr = ll->NowNode();
        fprintf(fp, "%s %d %c %.2f\n", curr->name, curr->age, curr->sex, curr->gpa);
        ll->GoNext();
    }
    fclose(fp);
}


