#include <stdio.h>
int main(){
    int choice ;
    float totalcost = 0.0 ;
    float paidamount ;
    float change ;
    do {
        printf("-------Vending-------\n");
        printf("1. Coke (15.00)\n") ;
        printf("2. Water (10.00)\n") ;
        printf("3. Snack (25.00)\n") ;
        printf("4. Exit and Pay\n") ;
        printf("Current Total: %.2f\n",totalcost);
        printf("Select item (1-4) :") ;
        scanf("%d", &choice) ;
    switch(choice){

        case 1 :
        totalcost += 15;
        printf("item added. Current total: %.2f \n",totalcost);
        break;

        case 2 :
         totalcost += 10;
        printf("item added. Current total: %.2f \n",totalcost);
        break;

        case 3:
         totalcost += 25;
        printf("item added. Current total: %.2f \n",totalcost);
        break;

        case 4:
            printf("Exit payment\n");
        default:
        break;
    }
    } while (choice != 4);
    if(totalcost > 0.0){
        printf("Total due: %.2f\n",totalcost);
        printf("Enter paid amount:");
        scanf("%f",&paidamount);
    if(paidamount >= totalcost){
        change = paidamount - totalcost ;
        printf("purchase successful. Change:%.2f\n",change);
    }else {
        printf("Insufficient payment. Purchase cancelled.\n");
    }
    return 0 ;
    }
}