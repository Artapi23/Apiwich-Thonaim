#include <stdio.h>

struct student{
    char name[50];
    int studentID ;
    float score ;
} ;
int main(){
    int N, i;
    float total = 0.0 ;
    float avg = 0.0 ;

    scanf("%d", &N);

    struct student students[N];
    for(i = 0;i<N;i++){
        scanf("%d %f %s", &students[i].studentID, &students[i].score, students[i].name);
        total += students[i].score;
    }
    if(N > 0){
       avg = total /N  ;
       printf("Average score : %.2f\n",avg);
    }
    return 0 ;
}

