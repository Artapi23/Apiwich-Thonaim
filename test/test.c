#include <stdio.h>
#include <string.h>

struct Item{
    char name[50];
    float unitPrice; 
    int quantity;
};

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    int i, N;
    const float VAT_RATE = 0.07; 
    
    float subTotal = 0.0;
    float totalVAT = 0.0;
    float grandTotal = 0.0;
    
    printf("กรุณาป้อนจำนวนรายการสินค้า (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) return 1;
    
    struct Item items[N]; 
    
    for (i = 0; i < N; i++){
        float itemCost;
        
        printf("\nรายการที่ %d:\n", i + 1);
        
        printf("  ราคาต่อหน่วย (unitPrice): ");
        if (scanf("%f", &items[i].unitPrice) != 1) return 1;

        printf("  จำนวน (quantity): ");
        if (scanf("%d", &items[i].quantity) != 1) return 1;
        
        clear_input_buffer();
        
        printf("  ชื่อสินค้า (name): ");
        if (fgets(items[i].name, sizeof(items[i].name), stdin) == NULL) return 1;
        
        size_t len = strlen(items[i].name);
        if (len > 0 && items[i].name[len - 1] == '\n') {
            items[i].name[len - 1] = '\0';
        }

        itemCost = items[i].unitPrice * items[i].quantity;
        
        printf("  [ผลลัพธ์]: %s x %d = %.2f บาท\n", 
               items[i].name, items[i].quantity, itemCost);
               
        subTotal += itemCost;
    }

    totalVAT = subTotal * VAT_RATE;
    grandTotal = subTotal + totalVAT;

    printf("\n==================================\n");
    printf("          สรุปใบเสร็จรับเงิน         \n");
    printf("==================================\n");
    printf("Subtotal (ราคาก่อนภาษี): %.2f บาท\n", subTotal);
    printf("VAT (%.0f%%): %.2f บาท\n", VAT_RATE * 100, totalVAT);
    printf("Grand Total (ราคารวมสุทธิ): %.2f บาท\n", grandTotal);
    printf("==================================\n");
    
    return 0;
}