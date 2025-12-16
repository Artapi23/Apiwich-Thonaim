#include <stdio.h>
int main(){
    int ROWS = 2 ;
    int Cols = 3 ;
    int A[2][3];
    int B[2][3];
    int B_T[3][2];
    int C[2][2];
    int i, j, k ;
    printf("Enter Element A for Matrix A (2x3):\n");
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < Cols; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Element B for Matrix B (2x3):\n");
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < Cols; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < Cols; j++){
           B_T[j][i] = B[i][j] ;
        }
    }
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < ROWS; j++){
            C[i][j] = 0 ;
        for(k = 0; k < 3 ;k++){
                C[i][j] += A[i][k] * B_T[k][j] ;
            }
        }
    }
    printf("\n-----MATRIX MULTIPLICATION REPORT-----\n");
    printf("\nMatrix A (2x3):\n");
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < Cols; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B (2x3):\n");
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < Cols; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Transposed (BT, 3x2):\n");
    for(i = 0 ; i < Cols ; i++){
        for(j = 0 ; j < ROWS; j++){
           printf("%d ", B_T[i][j]);
        }
        printf("\n");
    }
    printf("Result Matrix C (A x BT 2x2):\n");
    for(i = 0 ; i < ROWS ; i++){
        for(j = 0 ; j < ROWS; j++){
           printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}