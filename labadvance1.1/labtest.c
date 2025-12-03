#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// ประกาศต้นแบบฟังก์ชัน (Function Prototype)
// GetMatrix จะรับที่อยู่ของตัวชี้ (int **) เพื่อแก้ไขตัวชี้ใน main
// และรับที่อยู่ของตัวแปรจำนวนแถวและคอลัมน์ (int *)
void GetMatrix(int **value, int *row, int *col);

int main() {
    // data คือตัวชี้ที่จะเก็บที่อยู่ของบล็อกหน่วยความจำขนาดใหญ่สำหรับเมทริกซ์
    int *data = NULL;
    int m; // จำนวนแถว
    int n; // จำนวนคอลัมน์

    // 1. เรียกฟังก์ชันเพื่อรับขนาด จัดสรรหน่วยความจำ และป้อนข้อมูล
    // ส่ง &data (ที่อยู่ของตัวชี้ data), &m, และ &n
    GetMatrix(&data, &m, &n);

    // ตรวจสอบว่าจัดสรรหน่วยความจำสำเร็จหรือไม่
    if (data == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    // 2. พิมพ์อาร์เรย์ 2 มิติ (แบบเสมือน)
    printf("\nMatrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // คำนวณตำแหน่งในอาร์เรย์ 1 มิติ: data[i * n + j]
            printf("%d\t", data[i * n + j]);
        }
        printf("\n");
    }

    // 3. ปลดปล่อยหน่วยความจำที่จัดสรรไว้
    free(data);
    data = NULL; // ตั้งค่าตัวชี้เป็น NULL เพื่อป้องกันการใช้หน่วยความจำที่ถูกปลดปล่อยไปแล้ว

    return 0;
}

// ฟังก์ชันสำหรับรับขนาด, จัดสรรหน่วยความจำ, และป้อนข้อมูลเมทริกซ์
void GetMatrix(int **value, int *row, int *col) {
    // รับจำนวนแถวและคอลัมน์
    printf("Enter number of rows: ");
    // ใช้ scanf("%d", row) แทน &*row ก็ได้ เพราะ row เป็น int * อยู่แล้ว
    if (scanf("%d", row) != 1) {
        fprintf(stderr, "Invalid input for rows.\n");
        return;
    }
    printf("Enter number of columns: ");
    if (scanf("%d", col) != 1) {
        fprintf(stderr, "Invalid input for columns.\n");
        return;
    }

    // จัดสรรหน่วยความจำสำหรับอาร์เรย์ 2 มิติแบบเสมือน (แถวต่อแถวในบล็อกเดียว)
    // ขนาดที่ต้องจัดสรรคือ (จำนวนแถว * จำนวนคอลัมน์) * ขนาดของ int
    *value = (int *)malloc(sizeof(int) * (*row * *col));

    // ตรวจสอบความผิดพลาดในการจัดสรร
    if (*value == NULL) {
        perror("Failed to allocate memory for the matrix");
        return; // ออกจากฟังก์ชัน
    }

    // ป้อนข้อมูล
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            // คำนวณตำแหน่ง: i * จำนวนคอลัมน์ + j
            if (scanf("%d", &(*value)[i * *col + j]) != 1) {
                fprintf(stderr, "Invalid input for element [%d][%d].\n", i, j);
                // ควรมีการจัดการข้อผิดพลาดที่ซับซ้อนกว่านี้ แต่เพื่อความเรียบง่ายจะปล่อยผ่าน
            }
        }
    }

    // พิมพ์เมทริกซ์ภายในฟังก์ชัน (ตามโค้ดต้นฉบับที่สอง)
    // ส่วนนี้ซ้ำซ้อนกับใน main แต่ถ้าจะให้เหมือนโค้ดต้นฉบับที่สอง
    /*
    printf("\nMatrix elements entered (inside GetMatrix):\n");
    for(int i = 0; i < *row; i++){
        for(int j = 0; j < *col; j++){
            // โค้ดต้นฉบับมี printf("2%d") ซึ่งไม่ถูกต้อง จึงแก้ไขเป็น printf("%d\t")
            printf("%d\t", (*value)[i * *col + j]); 
        }
        printf("\n");
    }
    */
}