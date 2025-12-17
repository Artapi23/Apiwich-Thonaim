#include <stdio.h>
struct student {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
};
void upgrade(struct student *child);
int main(){
    struct student aboy ;
    struct student agirl ;
    aboy.sex = 'M';
    aboy.gpa = 3.00 ;
    agirl.sex = 'F' ;
    agirl.gpa = 3.00 ;
    upgrade(&aboy) ;
    upgrade(&agirl) ;
    printf("GPA for aboy : %.2f",aboy.gpa);
    printf("GPA for agirl: %.2f",agirl.gpa);
    return 0 ;
}
void upgrade(struct student *child){
    if((*child).sex == 'M'){
        (*child).gpa += (*child).gpa * 0.10 ; 
    }else if((*child).sex == 'F'){
        (*child).gpa += (*child).gpa * 0.20 ;
    }
}

