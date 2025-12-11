#include <stdio.h>
struct order
{
  int itemId ;
  float unitprice ;
  int quantity ;
};
int main(){
    int i, N ;
    float grandtotal = 0.0 ;
    float itemtotal = 0.0 ;
    const float SHIPPING_FEE = 50.0 ;
    printf("Number off Shopping :");
    scanf("%d", &N);
    struct order orders[N];
    for ( i = 0; i < N; i++){
    scanf("%d %f %d", &orders[i].itemId, &orders[i].unitprice, &orders[i].quantity);
    itemtotal = (orders[i].unitprice * orders[i].quantity)+ SHIPPING_FEE ;
    if(itemtotal >= 500){
        itemtotal * 0.9 ;
    }
    grandtotal += itemtotal ;
    printf("Grand total : %.2f\n", grandtotal) ;
    }
}