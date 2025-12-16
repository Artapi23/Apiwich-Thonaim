#include <stdio.h>

int main() {
    int ROWS = 2;
    int COLS = 3;
    int A[2][3], B[2][3];
    int B_T[3][2]; // ขนาด 3x2
    int C[2][2];   // ขนาด 2x2
    int i, j, k;

    // 1. รับข้อมูล Matrix A และ B
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 2. ทำ Transpose Matrix B: B(2x3) -> B_T(3x2)
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            B_T[j][i] = B[i][j];
        }
    }

    // 3. คูณ Matrix A(2x3) กับ B_T(3x2) ได้ Matrix C(2x2)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) { // ลูปที่ 3 สำหรับหา Dot Product
                C[i][j] += A[i][k] * B_T[k][j];
            }
        }
    }

    // 4. แสดงผลลัพธ์ตามรูปแบบที่ต้องการ
    printf("--- MATRIX MULTIPLICATION REPORT ---\n\n");

    printf("Matrix A (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", B_T[i][j]);
        }
        printf("\n");
    }

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}