#include <stdio.h>
struct SalesRecord
{
    char name[50] ;
    float target ;
    float actual ;
};
int main(){
    int i, N ;
    float grandtotalcommission = 0.0 ;
    printf("Enter Sale Man :");
    scanf("%d", &N);
    struct SalesRecord SalesRecord[N] ;
    for(i = 0 ; i < N ; i++){
        float basecommission = 0.0 ;
        scanf("%f %f %s",&SalesRecord[i].target,&SalesRecord[i].actual,&SalesRecord[i].name);
        basecommission = SalesRecord[i].actual * 0.10 ;
        if(SalesRecord[i].actual >= SalesRecord[i].target * 1.20){
            basecommission +=  200.0 ;
        }else if(SalesRecord[i].actual >= SalesRecord[i].target){
            basecommission += 50.0 ;
        } else if(SalesRecord[i].actual < SalesRecord[i].target * 0.90){
            basecommission -= 100.0 ;
        } else{
            printf("No bonus") ;
        }
            grandtotalcommission += basecommission ;
        }
        printf("Grand total commission : %.2f\n",grandtotalcommission);
        return 0 ;
    }
