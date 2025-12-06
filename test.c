#include <stdio.h>

int main() {
    // termCode: รหัสระยะเวลาลงทุน (1, 2, หรือ 3)
    int termCode;
    
    // investmentAmount: จำนวนเงินลงทุน
    float investmentAmount;
    
    // APR: อัตราดอกเบี้ยต่อปี (ในรูปแบบทศนิยม เช่น 0.03, 0.04)
    float APR;
    
    // TotalInterestEarned: ดอกเบี้ยทั้งหมดที่ได้รับหลัง 1 ปี
    float TotalInterestEarned;
    
    // 1. รับข้อมูล 2 ค่า: termCode และ investmentAmount
    printf("Enter Term Code (1, 2, or 3): ");
    if (scanf("%d", &termCode) != 1) {
        printf("Invalid input for Term Code.\n");
        return 1;
    }
    
    printf("Enter Investment Amount: ");
    if (scanf("%f", &investmentAmount) != 1) {
        printf("Invalid input for Investment Amount.\n");
        return 1;
    }
    
    // 2. ใช้ switch ในการตรวจสอบ termCode และ nested if-else ในการกำหนด APR
    switch (termCode) {
        case 1: // Term Code 1 (ระยะสั้น)
            // ใช้ nested if-else เพื่อกำหนด APR ตาม investmentAmount
            if (investmentAmount < 5000.0) {
                APR = 0.03; // APR 3.0%
            } else { // Amount >= 5000
                APR = 0.04; // APR 4.0%
            }
            break;
            
        case 2: // Term Code 2 (ระยะกลาง)
            // ใช้ nested if-else เพื่อกำหนด APR ตาม investmentAmount
            if (investmentAmount < 10000.0) {
                APR = 0.05; // APR 5.0%
            } else { // Amount >= 10000
                APR = 0.065; // APR 6.5%
            }
            break;
            
        case 3: // Term Code 3 (ระยะยาว)
            // ไม่ต้องใช้ if-else เพราะ APR เป็นอัตราเดียว
            APR = 0.08; // APR 8.0% (อัตราคงที่)
            break;
            
        default:
            // ถ้า Term Code ไม่ใช่ 1, 2, หรือ 3: ให้แสดงผล "Invalid Term Code"
            printf("Invalid Term Code\n");
            return 1; // สิ้นสุดโปรแกรม
    }
    
    // 3. คำนวณดอกเบี้ยทั้งหมดที่ได้รับหลัง 1 ปี
    // Total Interest Earned = investmentAmount * APR
    TotalInterestEarned = investmentAmount * APR;
    
    // 4. แสดงผลลัพธ์
    // แสดงผล APR ที่ใช้ (เพื่อความชัดเจน) และ Total Interest Earned เป็นทศนิยม 2 ตำแหน่ง
    printf("----------------------------------------\n");
    printf("Calculated APR: %.1f%%\n", APR * 100.0);
    printf("Total Interest Earned: %.2f\n", TotalInterestEarned);
    printf("----------------------------------------\n");
    
    return 0;
}