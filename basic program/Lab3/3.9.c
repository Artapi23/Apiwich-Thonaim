#include <stdio.h>
int main(){
    int N_DAYS, day ;
    float initialBudget ;
    float remainingBudget ;
    float dailyspend ;
    scanf("%f %d",&initialBudget, &N_DAYS);
    remainingBudget = initialBudget ;
    printf("Day | Spend | Remainning\n");
    for(day =1 ; day <= N_DAYS ; day++){
        dailyspend = 0.0 ;
    if(remainingBudget >= 500.00){
        dailyspend = 100.0 ;
    }else if(remainingBudget >= 100 ||remainingBudget <= 499.99){
        dailyspend = 50.00 ;
    }else if(remainingBudget < 100){
        dailyspend = 20.00 ;
    }else{
        dailyspend = 0.0 ;
    }
    if(dailyspend > remainingBudget){
        dailyspend = remainingBudget ;
    }
    remainingBudget -= dailyspend ;
    printf("%d | %.2f | %.2f\n",day ,dailyspend ,remainingBudget);
    }
    printf("Final Budget : %.2f\n",remainingBudget);
    return 0 ;
}