#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

// แก้ไขโปรโตไทป์ให้รับพอยเตอร์
void upgrade(struct student *child);

int main() {
    struct student aboy;
    
    // กำหนดค่าเริ่มต้นตามโจทย์
    aboy.sex = 'M';
    aboy.gpa = 3.00;

    // ส่งที่อยู่ของตัวแปร (&aboy) เข้าไปในฟังก์ชัน
    upgrade(&aboy);

    // แสดงผลลัพธ์หลังเรียกใช้ฟังก์ชัน (ควรได้ 3.30)
    printf("Result GPA: %.2f\n", aboy.gpa);

    return 0;
}

void upgrade(struct student *child) {
    if (child->sex == 'M') {
        child->gpa += (child->gpa * 0.10); // เพิ่ม 10%
    } else if (child->sex == 'F') {
        child->gpa += (child->gpa * 0.20); // เพิ่ม 20%
    }
}