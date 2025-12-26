#include <stdio.h>

void calculateGrade(); // เปลี่ยนชื่อให้สื่อความหมาย และไม่ต้องรับพารามิเตอร์

int main() {
    calculateGrade(); // เรียกใช้ฟังก์ชันที่นี่
    return 0;
}

void calculateGrade() {
    int score; // ประกาศตัวแปรเพื่อเก็บค่าที่รับจาก user
    printf("Enter score: ");
    scanf("%d", &score);

    if (score >= 80) {
        printf("Grade A\n");
    } else if (score >= 70) {
        printf("Grade B\n");
    } else if (score >= 60) {
        printf("Grade C\n");
    } else if (score >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
}