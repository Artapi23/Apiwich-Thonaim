#include <stdio.h>
#define SIZE 5
int calculate_sum(int array[], int size);
int number[SIZE];
    int total_sum ;
    float average ;
    int i, sum = 0 ;
int main(){
    printf("Enter %d integer numbers:\n",SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Number %d : ", i + 1);
        scanf("%d", &number[i]);
    }
    total_sum = calculate_sum(number, SIZE);
    average = (float)total_sum / SIZE ;
    printf("\n-----ARRAY AVERAGE REPORT-----\n");
    printf("Record Numbers :");
    for(i =0;i < SIZE; i++ ){
        printf(" %d",number[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f", average);
}
int calculate_sum(int array[], int size){
    for(i = 0; i < SIZE; i++){
        sum += array[i] ;
    }
    return sum ;
}