#include <stdio.h>
#define NUM_STUDENT 3
struct student {
    int id ;
    int score ;
};
    int find_max_score(struct student students[], int size);
    int TopClass ;
    int i ;
    int main(){
    struct student Classdata[NUM_STUDENT];
    
printf("Enter data for %d student",NUM_STUDENT);
for(i = 0 ; i < NUM_STUDENT ; i++){
    printf("-----Student %d-----\n",i + 1);
    printf("Enter ID: ");
    scanf("%d", &Classdata[i].id);
    printf("Enter Score: ");
    scanf("%d", &Classdata[i].score);
}
 TopClass = find_max_score(Classdata, NUM_STUDENT);
    printf("*STUDENT SCORE REPORT*\n");
    printf("ID  | Score\n");
    printf("----|---\n");
    for (i = 0; i < NUM_STUDENT ; i++) {
        printf("%-3d | %d\n", Classdata[i].id, Classdata[i].score);
    }
    printf("TOP PERFORMER ID: %d\n", TopClass);

    return 0;
}
int find_max_score(struct student students[], int size){
    int max_score = students[0].score ;
    TopClass = students[0].id ;
    for(int i = 1; i < size;i++){
        if(students[i].score > max_score){
        max_score = students[i].score ;
        TopClass = students[i].id ; 
        }
    }
    return TopClass ;
}