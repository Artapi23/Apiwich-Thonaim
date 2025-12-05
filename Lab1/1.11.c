#include <stdio.h>
int main(){
    int catagoryCode;
    float price_before_vat;
    float totalbill = 0.0;
    float vatAmout = 0.0;
    printf("Enter price before VAT:");
    scanf("%f", &price_before_vat);
    printf("Enter catagory code (1-4):");
    scanf("%d", &catagoryCode);
    if(catagoryCode == 1){
        totalbill = price_before_vat * 1.07;
    } else if(catagoryCode == 2){
        totalbill = price_before_vat;
    } else if(catagoryCode == 3){
        totalbill = price_before_vat * 1.15;
    } else {
        printf("Invalid catagory code.\n");
        totalbill = 0.0;
    }
    if(totalbill > 0.0){
        vatAmout = totalbill - price_before_vat;
        printf("Total bill: %.2f bath\n", totalbill);
        printf("VAT amount: %.2f bath\n", vatAmout);
    } 
    return 0;
}