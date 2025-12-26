#include <stdio.h>

void calculateGrade();

int main() {
    calculateGrade();
    return 0;
}
void calculateGrade(){
    int score;
    printf("Enter score:");
    scanf("%d",&score);

    if(score >= 80){
        printf("Grade A\n");
    }
    else if (score >= 70){
        printf("Grade B\n");
    }
    else if (score >= 60){
        printf("Grade C\n");
    }
    else if (score >= 50){
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }
    }
    

