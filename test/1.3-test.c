#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int total_sum = 0;
    FILE *fptr;
    char *FILENAME = "input_data.csv";

    // 1. เปิดไฟล์โหมด "r" (Read)
    fptr = fopen(FILENAME, "r");

    // ตรวจสอบความผิดพลาดในการเปิดไฟล์
    if (fptr == NULL) {
        printf("ERROR : Could not open file %s\n", FILENAME);
        return 1; // จบโปรแกรมทันที
    }

    // 2. อ่านข้อมูล 5 ค่าที่คั่นด้วย Comma
    if (fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5) == 5) {
        total_sum = num1 + num2 + num3 + num4 + num5; // คำนวณผลรวม
    }

    // 3. ปิดไฟล์
    fclose(fptr);

    // --- ส่วนการแสดงผลให้ตรงตาม Test Case เป๊ะๆ ---
    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);
    printf("File reading complete.\n"); // เพิ่มบรรทัดนี้ตาม Test Case

    printf("\n--- DATA ANALYSIS REPORT ---\n");
    // ปรับเป็น "Data read:" (r ตัวเล็ก) และเพิ่มช่องว่างหลัง comma
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}