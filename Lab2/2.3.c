#include <stdio.h>
int main(){
    int termcode;
    float investmentAmount;
    float aprRate = 0.0;
    float totalInterest = 0.0;
    printf("Enter term code (1-3)");
    scanf("%d", &termcode);
    printf("Enter investmentAmount: ");
    scanf("%f", &investmentAmount);
    switch (termcode){
        case 1:
        if(investmentAmount < 5000.0){
            aprRate = 0.03;
        }else{
            aprRate = 0.04;
        }
        break;
        case 2:
        if(investmentAmount < 10000.0){
            aprRate = 0.05;
        }else{
            aprRate = 0.065;
        }
        break;
        case 3:
        aprRate = 0.00;
        break;
        default:
        printf("Invalid Term Code\n");
        return 1;
    }
    totalInterest = investmentAmount * aprRate;
    printf("Total Interest Earned: %.2f\n", totalInterest);
    return 0;
}