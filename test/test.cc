#include <stdio.h>

void PrintResult(float grandTotal);

struct Order 
{
    int itemId;
    float unitPrice;
    int quantity;   
};

int main(){

    int N , i;  
    float grandTotal = 0.0;
    float itemsTotal = 0.0;
    float SHIPPING_FEE = 50.0;

    if(scanf("%d", &N) != 1 || N <= 0) {
        return 1;   
    }

    struct Order orders[N];

    for(i = 0; i < N; i++) {
        float totalPrice;
        if(scanf("%d %f %d", &orders[i].itemId, &orders[i].unitPrice ,&orders[i].quantity) != 3) {
            return 1;
        }

        itemsTotal = (orders[i].unitPrice * orders[i].quantity)+SHIPPING_FEE;
        if (itemsTotal >= 500.0) {
            itemsTotal *= 0.9; 
        }
        grandTotal += itemsTotal;
;
    }
    PrintResult(grandTotal);
    return 0;
}

void PrintResult(float grandTotal) {
    printf("Grand Total: %.2f\n", grandTotal);
}