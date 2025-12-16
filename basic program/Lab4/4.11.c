#include <stdio.h>
int main(){
    int ROWS = 2 ;
    int COLS = 4 ;
    int matrix[ROWS][COLS] ;
    int total_sum = 0 ;
    int i, j ;
    printf("Enter %d integer numbers for 2x4 array:\n",ROWS * COLS);
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < COLS ; j++){
            printf("Enter element for Row %d, COl %d:",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n-----2D ARRAY SUMMAYION REPORT-----\n");
    printf("Record Matrix(2x4):\n");
     for( i = 0 ; i < ROWS ; i++ ){
        for(j = 0 ; j < COLS ; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
     for( i = 0 ; i < ROWS ; i++ ){
        for(j = 0 ; j < COLS ; j++){
            total_sum += matrix[i][j];
    }
    printf("\nTotal sum of all elements: %d\n", total_sum);
}   
}