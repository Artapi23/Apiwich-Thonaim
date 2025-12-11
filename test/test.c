#include <stdio.h>

struct order
{
    int itemID;
    float unitprice;
    int quantity;
};

int main() {
    int i, N;
    // grandtotal จะเก็บผลรวมสุทธิสุดท้ายหลังหักส่วนลดของทุกรายการ
    float grandtotal = 0.0; 
    float itemtotal = 0.0;
    const float SHIPPING_FEE = 50.0; // ค่าจัดส่งคงที่ 50.0 บาท
    const float DISCOUNT_RATE = 0.10; // อัตราส่วนลด 10%
    float Discountamount = 0.0;
    
    printf("Number of Shopping Orders (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("จำนวนรายการไม่ถูกต้อง\n");
        return 1;
    }
    
    struct order orders[N];

    // --- 1. ลูปเพื่อวนรับค่า คำนวณ และสะสม Grand Total ---
    for (i = 0; i < N; i++){
        
        printf("\nรายการที่ %d (ID Price Quantity): ", i + 1);
        if (scanf("%d %f %d", &orders[i].itemID, &orders[i].unitprice, &orders[i].quantity) != 3) {
            printf("รับข้อมูลรายการที่ %d ผิดพลาด\n", i + 1);
            return 1;
        }
        
        // 4. คำนวณราคารายการก่อนส่วนลด: itemTotal = (unitPrice * quantity) + SHIPPING_FEE
        itemtotal = (orders[i].unitprice * orders[i].quantity) + SHIPPING_FEE;
        
        // กำหนดส่วนลดเป็น 0 ก่อนเสมอ
        Discountamount = 0.0; 
        
        // เงื่อนไขส่วนลด: ถ้า itemTotal >= 500.00 บาท ให้ส่วนลด 10%
        if (itemtotal >= 500.00) {
            Discountamount = itemtotal * DISCOUNT_RATE;
        } else {
            // ถ้า itemTotal < 500.00 บาท ไม่มีส่วนลด
            printf("No Discount!\n");
        }
        
        // 5. สะสมราคารวมสุทธิ (Grand Total) หลังหักส่วนลด
        // Grandtotal += (itemTotal - Discountamount)
        grandtotal += (itemtotal - Discountamount);
    }
    
    // --- 6. แสดงผลราคารวมสุทธิ (Grand Total) เพียงครั้งเดียว ---
    printf("\n=======================================\n");
    printf("Grand total (ราคารวมสุทธิ): %.2f\n", grandtotal);
    printf("=======================================\n");
    
    return 0;
}