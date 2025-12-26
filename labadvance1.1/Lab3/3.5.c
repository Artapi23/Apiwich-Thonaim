#include <stdio.h>
struct student  {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
};
void  Getstudent(struct student child[][10], int *room); 
int main(){
    struct student children[20][10] ;
    int group ;
    Getstudent(children, &group);
    for(int i = 0 ; i < group ; i++){
        printf("Room %d\n", i +1);
        for(int j = 0 ; j < 10; j++){
            printf("Student %d: ", j + 1);
            printf("Name=%s ", children[i][j].name);
            printf("Age=%d ", children[i][j].age);
            printf("Sex=%c ", children[i][j].sex);
            printf("GPA=%.2f\n", children[i][j].gpa);
        }
    } 
    return 0 ;
}
void  Getstudent(struct student child[][10], int *room){
    printf("Enter number of classroom :");
    scanf("%d", room);
    for(int i = 0 ; i < *room ; i++ ){
        printf("Room at %d\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("[%d] name: ", j + 1);
            scanf(" %19s", child[i][j].name);

            printf("[%d] age: ", j + 1);
            scanf("%d", &child[i][j].age);

            printf("[%d] sex (M/F): ", j + 1);
            scanf(" %c", &child[i][j].sex);

            printf("[%d] GPA: ", j + 1);
            scanf("%f", &child[i][j].gpa);
        }
    }
}