#include <stdio.h>
int *Getset(int *number);
int main(){
    int *data,number;
    printf("Enter number:");
    if(scanf("%d", &number) !=1){
        return 0;
    }
    data = Getset(&number);
    printf("your number is:""%d",*data);
    return 0;
}
int *Getset(int *number){
    return number;
}