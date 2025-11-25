#include <stdio.h>
int main(){
    int number;
    int evenSum = 0;
    int oddSum = 0;
    printf("Enter Number (0 to finish):");
    if(scanf("%d", &number) != 1){
        return 1;
    }
    while (number != 0){
        if(number % 2 == 0){
            evenSum = evenSum + number;
        } else {
            oddSum = oddSum + number;
        }
        printf("Enter the next number :");
        if(scanf("%d", &number) != 1){
            break;
        }
    }
    printf("Even sum: %d\n", evenSum);
    printf("Odd sum: %d\n", oddSum);
    return 0;
    }
