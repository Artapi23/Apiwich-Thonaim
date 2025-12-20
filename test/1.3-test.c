#include <stdio.h>

// 1. สร้าง Struct ชื่อ Product
struct Product {
    int item_id;
    float cost_price;
    float selling_price;
    int stock_quantity;
};

// ประกาศโปรโตไทป์ฟังก์ชัน
float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);

int main() {
    struct Product item;
    float total_profit, profit_percent;

    // ส่วนการรับข้อมูล
    // หมายเหตุ: ใน Test Case ใส่ P001 เป็นสตริง แต่โครงสร้างกำหนดเป็น int 
    // จึงขอใช้ %d รับเฉพาะตัวเลขตามโค้ดต้นฉบับของคุณ
    scanf("%d", &item.item_id);
    scanf("%f", &item.cost_price);
    scanf("%f", &item.selling_price);
    scanf("%d", &item.stock_quantity);

    // คำนวณค่า
    total_profit = calculate_total_profit(item.cost_price, item.selling_price, item.stock_quantity);
    profit_percent = calculate_profit_percentage(item.cost_price, item.selling_price);

    // --- การแสดงผลตาม Test Case 1 ---
    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %d\n", item.item_id);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.cost_price, item.selling_price, item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);

    // แสดงสถานะ (Status)
    printf("Status: ");
    if (total_profit > 0) {
        printf("Profit!\n");
    } else if (total_profit < 0) {
        printf("Loss!\n");
    } else {
        printf("Break Even.\n");
    }

    return 0;
}

// ฟังก์ชันคำนวณกำไรสุทธิ
float calculate_total_profit(float cost, float sell, int qty) {
    return (sell - cost) * qty;
}

// ฟังก์ชันคำนวณเปอร์เซ็นต์กำไร
float calculate_profit_percentage(float cost, float sell) {
    if (cost == 0) return 0;
    return ((sell - cost) / cost) * 100;
}