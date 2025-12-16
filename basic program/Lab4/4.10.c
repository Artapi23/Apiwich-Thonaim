#include <stdio.h>
int main(){
    int i,j ;
    int ROWS = 3 ;
    int COLS = 3 ;
    int data[ROWS][COLS] ;
    printf("Enter %d integer numbers for 3x3 array:\n",ROWS * COLS);
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < COLS ; j++){
            printf("Enter element for Row %d, COl %d:",i,j);
            scanf("%d", &data[i][j]);
        }
    }
    
    printf("\n-----TWO DIMENSION ARRAY REPORT-----\n");
    printf("Array Size: %d Rows x %d Columns\n",ROWS,COLS);
    printf("Comtent (Table Format):\n");
    printf("Row,Cols\n");
     for( i = 0 ; i < ROWS ; i++ ){
        for(j = 0 ; j < COLS ; j++){
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    
}