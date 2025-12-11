#include <stdio.h>

struct student{
    char name[50];
    int studentID ;
    float score ;
} ;
int main(){
    int N, i;
    printf("Enter Student :");
    scanf("%d", &N);
    struct student students[N];
    for(i = 0;i<N;i++){
        if(scanf("%d %f %s", &students[i].studentID, &students[i].score, students[i].name) != 3){
            return 1;
        }
    }
    for(i =0;i<N;i++){
        printf("ID: %d\n",students[i].studentID);
        printf("Score : %f\n",students[i].score);
        printf("Name : %s\n",students[i].name);
    }
    return 0 ;
}

