#include <stdio.h>

void swp_values(int *a, int *b);

int main(){
    int num1;
    int num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("\n---Swapping Report---\n");
    printf("Before sawp - Num1: %d, Num2: %d\n",num1,num2);
    swp_values(&num1,&num2);
    printf("After sawp - Num1: %d, Num2: %d\n",num1,num2);
    return 0;
}
    void swp_values(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }