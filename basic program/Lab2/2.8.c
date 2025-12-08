#include <stdio.h>
int main(){
    int N, i;
    int studentId, score, totalcalsses, absentclass ;
    float attendancePercent ;
    int passcount = 0 ;
    int failcount = 0 ;
    printf("Enter number of Student :");
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d %d %d %d",&studentId , &score , &totalcalsses , &absentclass);
    if(totalcalsses > 0){
        attendancePercent = (float)(totalcalsses - absentclass) / totalcalsses * 100.0;
        if(score >= 50 && attendancePercent >= 75.0){
            printf("Student ID %d : pass \n",studentId);
            passcount++;
        } else if(score < 50 && attendancePercent < 75.0){
            printf("student ID %d : FAIL Both score and attendance \n" ,studentId);
            failcount++;
        }
        else if(score < 50){
            printf("Student ID %d : FAIL score\n ",studentId);
            failcount++;
        } else if(attendancePercent < 75.0){
            printf("Student ID %d : FAIL low attendance(70.00%)\n", studentId);
            failcount++;
        }
    } else {
        printf("Student ID %d : FAIL\n", studentId);
    }
    }
    printf("Total PASS: %d\n", passcount);
    printf("Total FAIL: %d\n", failcount);
    return 0;
}