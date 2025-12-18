#include <stdio.h>
struct student  {
    char name[20] ;
    int age ;
    char sex ;
};
void  Getstudent(struct student child[][10], int *room); 
int main(){
    struct student children[20][10] ;
    int group ;
    Getstudent(children, &group);
    return 0 ;

}
void  Getstudent(struct student child[][10], int *room){
    printf("Enter number of classroom :");
    scanf("%d",*room);
    for(int i = 1 ; i < *room ; i++ ){
    }
}