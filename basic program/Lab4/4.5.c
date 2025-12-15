#include <stdio.h>
int main(){
    int SIZE = 6 ;
    int data[SIZE];
    int totalsum = 0 ;
    int i ;
    for(i = 0 ; i < SIZE ; i++){
        printf("Enter integer number %d:", i + 1);
        scanf("%d", &data[i]);
    }
    printf("\n---Summation report---\n");
    printf("Record Number :");
    for(i = 0 ; i < SIZE ; i++){
        printf("%d", data[i]);
        totalsum += data[i];
        if(i < SIZE -1){
            printf(" ");
        }
    }
    printf("\n");
    printf("totalsum of Numbers: %d\n", totalsum );
}