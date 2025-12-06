#include <stdio.h>
int main(){
    int N;
    int i;
    int quantity;
    float unitprice;
    float itemcost;
    float grandtotal;
    printf("Enter number of items: ");
    if(scanf("%d", &N) != 1){
        return 1;
    }
    for(i=1; i<=N; i++){
        printf("Enter quantity and unit price for item %d: ", i);
        if(scanf("%d %f", &quantity, &unitprice) != 2){
            continue;
        }
        float subtotal = unitprice * quantity;
        float discount = 0.0;
        if(subtotal >= 1000){
            discount = subtotal * 0,10;
        }
        else{    
        }
        itemcost = subtotal - discount;
        grandtotal += itemcost;
}
printf("Grand Total: %.2f\n" ,grandtotal);
}