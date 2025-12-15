#include <stdio.h>
int main(){
    int SIZE = 5 ;
    int number[SIZE] ;
    int i ;
    int evencount = 0 ;
    int oddcount = 0 ;
    for(i = 0 ; i < SIZE; i++){
        scanf("%d", &number[i]);
        if(number[i] % 2 == 0){
            evencount++ ;
        }else{
            oddcount++ ;
        }
    }
    printf("------Number Classification Report------\n");
    printf("Record Numbers:");
    for(i = 0 ; i < SIZE ; i++ ){
        printf("%d",number[i]);
        if(i < SIZE - 1){
            printf(" ");
        }
    }
    printf("\n");
    printf("Total Even number found: %d\n", evencount);
    printf("Total Odd number found: %d\n", oddcount);
}