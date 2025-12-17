#include <stdio.h>
struct student {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
};
typedef struct  student stds ;
void upgrade( struct student *child);
int main(){
    stds aboy ;
    stds agirl ;
    aboy.sex = 'M' ;
    agirl.sex = 'F' ;
    aboy.gpa = 3.00 ;
    agirl.gpa = 3.00 ;
    upgrade(&aboy);
    upgrade(&agirl);
    printf("Boys GPA : %.2f\n",aboy.gpa);
    printf("Girls GPA : %.2f",agirl.gpa);
}
void upgrade( struct student *child){
    if((*child).sex == 'M'){
        (*child).gpa += (*child).gpa * 0.10 ; 
    }else if((*child).sex == 'F'){
        (*child).gpa += (*child).gpa * 0.20 ;
    }
} 
