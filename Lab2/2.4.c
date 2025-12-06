#include <stdio.h>
int main(){
    float principal;
    float monthlypayment;
    float interest;
    int monthcount = 0;
    const float interest_rate = 0.01;
    const float penalty = 10.0;
    printf("Enter principal:");
    scanf("%f", &principal);
    printf("Enter monthlypayment:");
    scanf("%f", &monthlypayment);
    while (principal > 0)
    {
        monthcount++;
        interest = principal * 0.01;
        principal = principal + interest;
        if(monthlypayment < interest){
            principal = principal + penalty;
            printf("Month %d: penalty(%.2f) Added!",monthcount, penalty);
        }else{
            printf("Month %d:", monthcount);

        }
        principal = principal - monthlypayment;
        if(principal <= 0){
            printf("Remainning Debt: 0.00\n");
            break;
        }else{
            printf("Remaining Debt: %.2f\n", principal);
        }
        if(monthcount > 1000){
            printf("Error");
            break;
        }
    }
    printf("Loan setlled in %d Months\n", monthcount);
    return 0;
}