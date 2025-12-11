#include <stdio.h>
struct Student
{
    char name[50] ;
    int studentid ;
    float score ;
};
int main(){
    int i, N;
    int passcount = 0 ;
    int failcount = 0 ;
    scanf("%d", &N);
    struct Student students[N];
    for ( i = 0; i < N; i++)
    {
       scanf("%d %f %s", &students[i].studentid, &students[i].score, students[i].name);
    }
    for ( i = 0; i < N; i++)
    {
        if(students[i].score >= 60.0){
            passcount++;
        }
        else{
            failcount++;
        }
    }
    printf("Pass : %d\n",passcount);
    printf("Fail : %d\n",failcount);
    return 0 ;
}
