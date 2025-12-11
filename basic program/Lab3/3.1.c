#include <stdio.h>
struct product{
    char name[50];
    int productID ;
    float price ;
};
int main(){
    struct product item ;
    printf("Enter product id :") ;
    scanf("%d", &item.productID);
    printf("Enter Price :") ;
    scanf("%f", &item.price);
    printf("Enter Item name :") ;
    scanf("%s", &item.name);
    printf("ID : %d , Price %f , Name %s\n",item.productID,item.price,item.name);
    return 0 ;
}