#include <stdio.h>
int main(){
    int STUDENTS = 5 ;
    int scores[STUDENTS] ;
    int sum = 0 ;
    float average = 0.0 ;
    int above_average =0 ;
    int i ;
    for(i = 0 ; i < STUDENTS ; i++){
        printf("Enter scores student %d : ", i+1);
        scanf("%d", &scores[i]);
        sum += scores[i];
        average = (float)sum / STUDENTS ;;
    }
    for(i = 0 ; i < STUDENTS ; i++){
        if(scores[i] > average){
            above_average++;
        }
    }
    printf("\n-----STUDENTS SCORE REPORT-----\n");
    printf("Recorded Scores");
    for(i = 0 ; i < STUDENTS ; i++){
        printf("%d",scores[i]);
        if(i < STUDENTS - 1){
            printf(" ");
        }
    }
    printf("\n");
    printf("Total Sum:%d\n",sum);
    printf("Average Score: %.2f\n", average);
    printf("Number of Scores Aboveaverage: %d\n",above_average);
    return 0 ;
}