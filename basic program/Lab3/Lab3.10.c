#include <stdio.h>
struct Item{
    char name[50] ;
    float unitprice ;
    int quantity ;
};
int main(){
    int i, N ;
    float subtotal = 0.0 ;
    float totalVAT = 0.0 ;
    float grandTotal = 0.0 ;
    float Vatrate = 0.07 ;
    printf("Enter Receipt :");
    scanf("%d", &N);
    struct Item item[N] ;
    printf("Receipt\n");
    for (i = 0; i < N; i++){
        float itemcost ;
        printf("Enter Item :");
        scanf("%s",&item[i].name);
        printf("Enter Price :");
        scanf("%f",&item[i].unitprice);
        printf("Enter quantity :");
        scanf("%d",&item[i].quantity);
        itemcost = item[i].unitprice * item[i].quantity ;
        printf("%s x %d = %.2f\n",item[i].name,item[i].quantity,itemcost);
        subtotal += itemcost ;
        totalVAT = subtotal * Vatrate ;
        grandTotal = subtotal + totalVAT ;
        printf("Subtotal : %.2f\n",subtotal) ;
        printf("Vat (7%%) : %.2f\n",totalVAT) ;
        printf("Grand Total : %.2f\n",grandTotal) ;
    }
    return 0 ;
}