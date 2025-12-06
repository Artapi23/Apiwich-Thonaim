#include <stdio.h>

int main() {
    // N: จำนวนสินค้าทั้งหมด
    // i: ตัวแปรสำหรับลูป
    // quantity: จำนวนชิ้นของสินค้าแต่ละรายการ
    int N, i, quantity;
    
    // unitPrice: ราคาสินค้าต่อชิ้น
    // itemCost: ราคารวมของสินค้าแต่ละรายการ (หลังหักส่วนลดถ้ามี)
    // grandTotal: ราคารวมสุทธิทั้งหมด
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // 1. รับค่า N: จำนวนเต็มของรายการสินค้าทั้งหมด
    if (scanf("%d", &N) != 1) {
        return 1; // สิ้นสุดโปรแกรมหากรับค่าไม่สำเร็จ
    }
    
    // วนลูป N รอบ สำหรับสินค้าแต่ละรายการ
    for (i = 0; i < N; i++) {
        // 2. รับข้อมูล 2 ค่า: unitPrice (ราคาต่อชิ้น) และ quantity (จำนวนชิ้น)
        if (scanf("%f %d", &unitPrice, &quantity) != 2) {
            // หากรับค่าไม่สำเร็จ ให้พยายามรับค่ารายการต่อไป
            // หรือจะเลือก 'break;' เพื่อหยุดลูปทั้งหมดก็ได้
            continue; 
        }
        
        // คำนวณราคาเริ่มต้นก่อนคิดส่วนลด
        float subTotal = unitPrice * quantity;
        float discount = 0.0;
        
        // ตรวจสอบเงื่อนไขส่วนลด (ใช้เฉพาะ if-else)
        // ถ้า unitPrice มีค่า "ตั้งแต่ 1000.00 บาทขึ้นไป": ให้ส่วนลด 10% ของราคารายการนั้น
        if (unitPrice >= 1000.00) {
            discount = subTotal * 0.10; // ส่วนลด 10%
        } 
        // ถ้า unitPrice "น้อยกว่า 1000.00 บาท": ไม่มีส่วนลด (discount = 0.0)
        else {
            // ไม่ต้องทำอะไร เพราะ discount ถูกตั้งค่าเริ่มต้นไว้ที่ 0.0 แล้ว
        }
        
        // คำนวณ itemCost: ราคาหลังหักส่วนลด
        itemCost = subTotal - discount;
        
        // นำ itemCost ไปรวมกับ grandTotal
        grandTotal += itemCost;
    }
    
    // ผลลัพธ์ที่แสดงต้องเป็น "ราคารวมสุทธิ" (Grand Total) หลังหักส่วนลดทั้งหมด
    // แสดงผลลัพธ์เป็นทศนิยม 2 ตำแหน่งตามรูปแบบ '% .2f'
    printf("Grand Total: %.2f\n", grandTotal);
    
    return 0;
}