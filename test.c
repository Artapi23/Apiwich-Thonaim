#include <stdio.h>

int main() {
    int N_PERIODS, i;
    float INITIAL_BALANCE, PENALTY_FEE;
    float balance;
    
    int cmdCode;
    float amount;
    
    // 1. รับค่าเริ่มต้น: InitialBalance (Float), PENALTY_FEE (Float), N_PERIODS (Int)
    if (scanf("%f %f %d", &INITIAL_BALANCE, &PENALTY_FEE, &N_PERIODS) != 3) {
        return 1;
    }
    
    balance = INITIAL_BALANCE;
    printf("Initial Balance: %.2f\n", balance);

    // 2. วนลูป N_PERIODS รอบ (สำหรับแต่ละเดือน)
    for (i = 0; i < N_PERIODS; i++) {
        
        // รับข้อมูล 2 ค่า: รหัสคำสั่ง (cmdCode), ปริมาณ (amount)
        if (scanf("%d %f", &cmdCode, &amount) != 2) {
            break;
        }

        // 3. เงื่อนไขการประมวลผล (ใช้ switch-case)
        switch (cmdCode) {
            case 1: // cmdCode = 1: ฝาก (Deposit)
                balance += amount;
                printf("Deposit: %.2f\n", amount);
                break;
                
            case 2: { // cmdCode = 2: ถอน (Withdrawal)
                float totalPenalties = 0.0; // ไม่ได้กำหนดให้รวมค่าปรับ จึงใช้ตัวแปรชั่วคราว
                
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal: %.2f\n", amount);
                } else {
                    // ถ้า amount > balance
                    totalPenalties += PENALTY_FEE;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", PENALTY_FEE);
                }
                break;
            }
                
            case 3: { // cmdCode = 3: คิดดอกเบี้ย (Interest)
                float APR;
                float interest;
                
                // ใช้ Nested If-Else เพื่อกำหนด APR
                if (balance < 1000.00) {
                    APR = 1.0; // 1.0%
                } else { // balance >= 1000.00
                    APR = 2.5; // 2.5%
                }
                
                // คำนวณดอกเบี้ยรายเดือน: Interest = balance * (APR / 12.0)
                interest = balance * (APR / 100.0 / 12.0); // APR ต้องหาร 100 ก่อน
                
                // อัปเดตยอดคงเหลือและแสดงผล
                balance += interest;
                printf("Interest: %.2f (Rate: %.1f%%)\n", interest, APR);
                break;
            }
                
            default: // รหัสอื่น ๆ
                printf("Error: Invalid Command.\n");
                break;
        }
    }
    
    printf("Final Balance: %.2f\n", balance);
    return 0;
}