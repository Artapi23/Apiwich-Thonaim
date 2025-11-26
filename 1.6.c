#include <stdio.h>
int main(){
    int number;
    do{
        printf("Enter a number between 1 to 10:");
        if(scanf("%d", &number) !=1){
        }
        if(number < 1 || number > 10){
        printf("Error: value must be 1 -10:");
        }
    }while (number < 1 || number > 10);
    printf("Input accepted: %d\n", number);
    return 0;
}