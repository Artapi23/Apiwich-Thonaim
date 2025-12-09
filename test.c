#include <stdio.h>

int main() {
    int N, i;
    int initialStock, cmdCode, quantity;
    float PENALTY_FEE;
    int currentStock;
    float totalPenalties = 0.0;
    
    // 1. รับค่าเริ่มต้น: initialStock (int), PENALTY_FEE (float), N (int)
    // *** แก้ไขการรับค่าให้ตรงตามโจทย์: %d %f %d ***
    // (สมมติว่าต้องการรับ initialStock, PENALTY_FEE, N ตามลำดับ)
    if (scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3) {
        // หากรับค่า 3 ตัวแรกไม่สำเร็จ ให้จบโปรแกรม
        return 1; 
    }
    
    currentStock = initialStock;

    // 2. วนลูป N รอบ เพื่อรับและประมวลผลคำสั่ง
    for (i = 0; i < N; i++) {
        
        // รับข้อมูล 2 ค่าต่อรอบ: รหัสคำสั่ง (cmdCode), ปริมาณ (quantity)
        if (scanf("%d %d", &cmdCode, &quantity) != 2) {
            // หากอ่านข้อมูลไม่ครบ ให้หยุดการทำงาน
            break; 
        }

        // 3. เงื่อนไขการประมวลผล (ใช้ switch-case)
        switch (cmdCode) {
            case 1: // cmdCode = 1: รับสินค้าเข้า (stock: +)
                // ตรวจสอบเงื่อนไข quantity > 0
                if (quantity > 0) {
                    currentStock += quantity;
                    printf("Received %d units.\n", quantity);
                } else {
                    printf("Error: Quantity must be positive.\n");
                }
                break;
                
            case 2: // cmdCode = 2: เบิกสินค้าออก (stock: -)
                // 1. ตรวจสอบ quantity <= 0
                if (quantity <= 0) {
                    printf("Error: Quantity must be positive.\n");
                } 
                // 2. ตรวจสอบ quantity <= stock (สินค้าพอ)
                else if (quantity <= currentStock) {
                    currentStock -= quantity;
                    printf("Shipped %d units.\n", quantity);
                } 
                // 3. ตรวจสอบ quantity > stock (สินค้าไม่พอ) -> ค่าปรับ
                else {
                    totalPenalties += PENALTY_FEE;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", PENALTY_FEE);
                }
                break;
                
            case 3: // cmdCode = 3: ตรวจสอบสถานะ (STATUS)
                printf("Available Stock: %d\n", currentStock);
                printf("Total Penalties: %.2f\n", totalPenalties);
                break;
                
            default: // รหัสอื่น ๆ
                printf("Error: Invalid Command.\n");
                break;
        }
    }
    
    // โค้ดนี้จะจบการทำงานด้วย return 0; ที่ท้าย main
    return 0;
}