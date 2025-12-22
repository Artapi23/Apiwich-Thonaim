#include <stdio.h>
#define SIZE 5
int calculate_net_balance(int *trans_array, int size, int *status_ptr);

int main(){
    int transaction[SIZE], net_balance, finance_status, i ;
    
    printf("Enter %d Tranfactions (Income +, Expense -)\n",SIZE);
    for(i = 0; i < SIZE ; i++){
        printf("Transaction %d:",i + 1);
        scanf("%d",&transaction[i]);
    }
    net_balance = calculate_net_balance(transaction,SIZE,&finance_status);
    printf("\nPERSONAL FINANCE REPORT\n");
    printf("Transactions Record: ");
    for(i = 0; i < SIZE; i++){
        printf(" %d",transaction[i]);
    }
    printf("\nNet Balance: %d\n", net_balance);
    printf("Status: ");
    if(net_balance >= 0){
        printf("Profits\n");
    }
    else{
        printf("Losses\n");
    }
    return 0 ;
}

int calculate_net_balance(int *trans_array, int size, int *status_ptr){
    int i ;
    int net_balance = 0;
    *status_ptr = 1;
    for(i = 0; i < size; i++){
        net_balance += trans_array[i];
    }
}