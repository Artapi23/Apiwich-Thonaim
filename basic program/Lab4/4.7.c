#include <stdio.h>
int main(){
    int maxsize = 10 ;
    int data[maxsize];
    int N, i ;
    int searchvalue = 0 ;
    int count = 0;

    printf("Enter number (N, max %d):",maxsize);
    scanf("%d",&N);

    if(N > maxsize || N <1){
        N = maxsize ;
    }
    printf("Enter integer numbers:\n");
    for(i=0;i < N;i++){
        printf("Element %d:", i+1);
        scanf("%d", &data[i]);
    }
    printf("Enter search value :");
    scanf("%d", &searchvalue);
    for(i = 0; i < N; i++){
        if(data[i] == searchvalue){
        count++;
        }
    }
     printf("--FREQUENCY ANALYSIS REPORT--\n");
     printf("Total Element record (N): %d\n", N);
    printf("Recorded Number: ");
    for ( i = 0; i < N; i++){
     printf(" %d" ,data[i]);
    }
    printf("\n");
    printf("search value: %d\n", searchvalue);
    printf("Frequency count: %d\n", count);
 }
