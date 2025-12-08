#include <stdio.h>
int main(){
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    const float BASE_RATE_1 = 299.0;
    const float BASE_RATE_2 = 599.0;
    printf("Enter Plan Code (1 or 2):");
    scanf("%d", &planCode);
    printf("Enter Data Usage (GB):");
    scanf("%f", &dataUsage_GB);
    if (planCode == 1){
        totalBill = BASE_RATE_1;
    if(dataUsage_GB > 10.0){
        totalBill = BASE_RATE_1 + 10.0 * (dataUsage_GB - 10.0);
    }
    } else if (planCode == 2){
        totalBill = BASE_RATE_2;
        if(dataUsage_GB > 20.0){
            totalBill = BASE_RATE_2 + 50.0 + 5.0 * (dataUsage_GB - 20.0);
        }
    } else {
        printf("Invalid Plan Code\n");
        totalBill = -1.0;
    }
    if (totalBill >= 0.0){
        printf("Total Bill: %.2f Bath\n",totalBill);
    }
    return 0;
}