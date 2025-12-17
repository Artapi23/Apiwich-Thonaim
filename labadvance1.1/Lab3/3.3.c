#include <stdio.h>
struct student
{
    char name[20];
    int age ;
    char sex ;
    float gpa ;
};
struct student upgrade(struct student child);
int main(){
    struct student aboy ;
    struct student agirl ;
    aboy.sex = 'M' ;
    agirl.sex = 'F' ;
    aboy.gpa = 3.00 ;
    agirl.gpa = 3.00 ;
    aboy = upgrade(aboy);
    agirl = upgrade(agirl);
    printf("%.2f\n", aboy.gpa);
    printf("%.2f",agirl.gpa);
    return 0 ;
}
struct student upgrade(struct student child){
    if(child.sex == 'M'){
        child.gpa += child.gpa * 0.10 ;
    }else if(child.sex == 'F'){
        child.gpa += child.gpa * 0.20 ;
    }
    return child ;
}