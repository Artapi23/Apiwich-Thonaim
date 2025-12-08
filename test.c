#include <stdio.h>
int main(){

    int N_MONTHS,months,successCount = 0;
    float dailyDeposit ,monthlyTotal ;

    if (scanf("%d",&N_MONTHS) != 1){
        return 1 ;
    }

    for (months = 1; months <= N_MONTHS; months++){ 
           
        monthlyTotal = 0.00;

         if (scanf("%f",&dailyDeposit) != 1){
                break;
            }

          while (dailyDeposit != 0.00){
            monthlyTotal += dailyDeposit;
            if (scanf("%f",&dailyDeposit) != 1){
                break;
            }             
        }
        if (monthlyTotal >= 500){
                successCount++;
            }
        printf("Month %d Total : %.2f\n",months,monthlyTotal);
    }
    printf("Success Count: %d\n",successCount);
    return 0;
}