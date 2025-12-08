#include <stdio.h>
int main(){
    int customertype;
    float consumption_kwh;
    float totalBill = 0.0;
    printf("Enter Customer type (1 or 2):");
    if(scanf("%d %f", &customertype, &consumption_kwh) != 2){
        return 1;
    }
    if(customertype == 1){
        if(consumption_kwh >=0 && consumption_kwh <=100){
            totalBill = consumption_kwh * 3.0;
        }else{
            totalBill = consumption_kwh * 4.0;
        }
    } else if (customertype == 2){
        if(consumption_kwh >=0 && consumption_kwh <=500){
            totalBill = consumption_kwh * 5.0;
        }else{
            totalBill = consumption_kwh * 6.5;
        }
    } else {
        printf("Invalid customer type.\n");
        totalBill = -1.0;
    }
    if (totalBill >= 0.0){
        printf("totalBill: %.2f bath\n", totalBill);
    }
    if(totalBill >= 0.0 ){
        printf("Total Bill: %.2f bath\n", totalBill);
    }
    return 0;
}