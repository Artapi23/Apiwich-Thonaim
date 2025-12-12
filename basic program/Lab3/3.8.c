#include <stdio.h>
struct Campaign
{
    char name[50] ;
    float productprice ;
    int salescount ;
    float adspend ;
};
int main(){
    int i, N ;
    scanf("%d", &N);
    struct Campaign Campaign[N];
    for(i = 0; i < N; i++){
        float commissionrate = 0.0 ;
        float totalrevenue ;
        float totalcommission ;
        float netprofitloss ;
        printf("Enter Campaign :");
        scanf("%s",&Campaign[i].name);
        printf("Enter Product Price :");
        scanf("%f",&Campaign[i].productprice);
        printf("Enter Sales Count :");
        scanf("%d",&Campaign[i].salescount);
        printf("Enter Ad Spend :");
        scanf("%f",&Campaign[i].adspend);
        totalrevenue = Campaign[i].productprice * Campaign[i].salescount ;
        if(Campaign[i].salescount >= 20){
            commissionrate = 0.20 ;
        } else if(Campaign[i].salescount >= 10){
            commissionrate = 0.15 ;
        } else if(Campaign[i].salescount < 10){
            commissionrate = 0.10 ;
        } else{
            commissionrate = 0.05 ;
        }
        totalcommission = totalrevenue * commissionrate ;
        netprofitloss = totalcommission - Campaign[i].adspend ;
        printf("Campaign : %s\n",Campaign[i].name);
        printf("Sales : %d , Ad Spend : %.2f\n",Campaign[i].salescount,Campaign[i].adspend);
        printf("Rate Used: %.0f%%\n",commissionrate * 100);
        printf("Calculate : (%.2f * %.0f%%) - %.2f = %.2f\n",totalrevenue, commissionrate * 100,Campaign[i].adspend,netprofitloss);
        printf("Net result : %.2f\n",netprofitloss);
        }
        return 0 ;
    }


