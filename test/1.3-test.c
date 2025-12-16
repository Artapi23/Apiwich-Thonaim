#include <stdio.h>

int main() {
    int i, j;
    int ROWS = 3;
    int COLS = 3;
    int data[3][3]; // ประกาศ Array 2 มิติ ขนาด 3x3

    // 1. ขั้นตอนการรับข้อมูล: ใช้ Nested Loops (ลูปซ้อนลูป)
    printf("Enter %d integer numbers for 3x3 array:\n", ROWS * COLS);
    for (i = 0; i < ROWS; i++) {       // Loop ตัวนอกควบคุมแถว (Row)
        for (j = 0; j < COLS; j++) {   // Loop ตัวในควบคุมคอลัมน์ (Column)
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &data[i][j]);  // รับค่าลงในตำแหน่ง data[i][j]
        }
    }

    // 3. การแสดงผลลัพธ์ (Report) ในรูปแบบตาราง
    printf("\n----- TWO DIMENSION ARRAY REPORT -----\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);
    printf("Content (Table Format):\n");

    // ใช้ Nested Loops อีกครั้งเพื่อแสดงผล
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            // พิมพ์ค่าใน Array โดยเว้นช่องว่างให้สวยงาม (ใช้ %d หรือ %4d)
            printf("%d\t", data[i][j]); 
        }
        // เมื่อจบ Loop ตัวในของแต่ละแถว ให้ขึ้นบรรทัดใหม่
        printf("\n");
    }

    return 0;
}