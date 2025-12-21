#include <stdio.h>

int calculate_change_amount(int cost, int paid);
int count_denomination(int *change_remaining, int denomination);

int main(){
    int total_cost ;
    int amount_paid ;
    int change_amount ;
    int remaining_change ;

    int count_1000, count_500, count_100, count_50, count_20, count_10, count_5, count_2,count_1;

    printf("Enter total cost :");
    scanf("%d",&total_cost);
    printf("Enter amount paid :");
    scanf("%d",&amount_paid);

    change_amount = calculate_change_amount(total_cost, amount_paid);

    if(change_amount == -1){
        printf("\nError: Amount paid is less than total cost\n");
        return 1 ;
    }
    remaining_change = change_amount;
    count_1000 = count_denomination(&remaining_change, 1000);
    count_500 = count_denomination(&remaining_change, 500);
    count_100 = count_denomination(&remaining_change, 100);
    count_50 = count_denomination(&remaining_change, 50);
    count_20 = count_denomination(&remaining_change, 20);
    count_10 = count_denomination(&remaining_change, 10);
    count_5 = count_denomination(&remaining_change, 5);
    count_2 = count_denomination(&remaining_change, 2);
    count_1 = count_denomination(&remaining_change, 1);

    printf("\n-----CHANGE REPORT-----\n");
    printf("Total cost: %d\n",total_cost);
    printf("Amount paid: %d\n",amount_paid);
    printf("Change: %d\n",change_amount);
    printf("\nDemonation Breakdown:\n");

    if(count_1000 > 0){
        printf("1000: %d\n",count_1000);
    }
    if(count_500 > 0){
        printf("500: %d\n",count_500);
    }
    if(count_100 > 0){
        printf("100: %d\n",count_100);
    }
    if(count_50 > 0){
        printf("50: %d\n",count_50);
    }
    if(count_20 > 0){
        printf("20: %d\n",count_20);
    }
    if(count_10 > 0){
        printf("10: %d\n",count_10);
    }
    if(count_5 > 0){
        printf("5: %d\n",count_5);
    }
    if(count_2 > 0){
        printf("2: %d\n",count_2);
    }
    if(count_1 > 0){
        printf("1: %d\n",count_1);
    }
    return 0;
}
int calculate_change_amount(int cost, int paid){
    if(paid >= cost){
     return paid - cost;    
    }else{
        return -1 ;
    }
  
}
int count_denomination(int *change_remaining, int denomination){
    int count = *change_remaining / denomination;
    *change_remaining = *change_remaining % denomination;
    return count ;
}
