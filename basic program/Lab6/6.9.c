#include <stdio.h>
#define MONTH 3
int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr);
void get_monthly_data(int array[], int size,const char *type);
void print_monthly_data(int array[], int size, const char *type);
int main(){
    int monthly_revenue[MONTH] ;
    int monthly_expense[MONTH] ;
    int net_profit ;
    int business_status ;

    get_monthly_data(monthly_revenue,MONTH,"Revenue");
    get_monthly_data(monthly_expense,MONTH,"Expense");

    printf("\n3 Monrth Financial Analysis Report\n");
    print_monthly_data(monthly_revenue,MONTH,"Revenue");
    print_monthly_data(monthly_expense,MONTH,"Expense");

    net_profit = analyze_profitability(monthly_revenue,monthly_expense,MONTH,&business_status);

    printf("NET PROFIT: %d",net_profit);
    printf("BUSINESS STATUS: ");
    if (business_status == 1) {
        printf("PROJECT IS PROFITABLE\n");
    } else {
        printf("PROJECT IS UNPROFITABLE\n");
    }

    return 0;
    }
void get_monthly_data(int array[], int size,const char *type){
    printf("Enter %d Months of %s values:\n",size,type);
    for(int i = 0; i < size; i++){
        printf("Month %d %s:",i + 1,type);
        scanf("%d",&array[i]);
    }
}
void print_monthly_data(int array[], int size, const char *type){
    long total = 0 ;
    for(int i = 0; i < size; i++){
        total += array[i];
    }
    printf("Total %s: %ld\n",type,total);
}
int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr){
    int total_rev = 0 ;
    int total_exp = 0 ;
    for(int i = 0; i < size; i++){
        total_rev += *(rev_ptr + i);
        total_exp += *(exp_ptr + i);
    }

    int net = total_rev - total_exp ;

    if (net >= 0) {
        *status_ptr = 1; 
    } else {
        *status_ptr = 0; 
    }
    return net ;
}


