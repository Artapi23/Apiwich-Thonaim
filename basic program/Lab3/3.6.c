#include <stdio.h>
struct Transaction{
    char description[50] ;
    float amount ;
};
int main(){
    int i, N ;
    float totalIncome = 0.0 ;
    float totalExpense = 0.0 ;
    float netbalance = 0.0 ;
    printf("Enter your Descripytion :");
    scanf("%d", &N);
    struct Transaction Transaction[N] ;
    for (i = 0; i < N; i++){
        scanf("%f %s",&Transaction[i].amount,&Transaction[i].description);
        if(Transaction[i].amount >= 0.0){
            totalIncome += Transaction[i].amount ;
        } else {
            totalExpense += -Transaction[i].amount ;

        }
    }
    netbalance = totalIncome - totalExpense ;
    printf("Total income : %.2f\n", totalIncome);
    printf("Total Expense : %.2f\n", totalExpense);
    printf("Total Balance : %.2f\n", netbalance);
    return 0 ;
}
