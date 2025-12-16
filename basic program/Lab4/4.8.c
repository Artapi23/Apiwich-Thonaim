#include <stdio.h>
int main(){
    int maxsize = 10 ;
    int data[maxsize];
    int status[maxsize];
    int N ;
    int i, j ;
    int count = 0 ;
    for(i = 0; i < maxsize; i++){
        status[i] = 10;
    }
    printf("Enter the number of elements max %d :", maxsize);
    scanf("%d", &N);
    if(N > maxsize || N < 1){
        N = maxsize ;
    }
    printf("Enter %d integer numbers:\n", N);
    for(i = 0;i < N;i++){
        printf("Element %d:",i+1);
        scanf("%d",&data[i]);
    }
    printf("\n---FREQUENCY ANALYSIS REPORT---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");
    for(i = 0; i < N;i++){
        printf("%d", data[i]);
    }
    printf("\n");
    printf("---FREQUENCY TABLE---\n");
}