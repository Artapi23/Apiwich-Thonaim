#include <stdio.h>
int main(){
    int N_MONTH ;
    int month ;
    int successcount = 0 ;
    float dailydeposit ;
    float monthlytotal ;

    if (scanf("%d",&N_MONTH) != 1){
        return 1 ;
    }

    for (month = 1; month <= N_MONTH; month++){ 
           
        monthlytotal = 0.00;

         if (scanf("%f",&dailydeposit) != 1){
                break;
            }

          while (dailydeposit != 0.00){
            monthlytotal += dailydeposit;
            if (scanf("%f",&dailydeposit) != 1){
                break;
            }             
        }
        if (monthlytotal >= 500){
                successcount++;
            }
        printf("Month %d Total : %.2f\n",month,monthlytotal);
    }
    printf("Success Count: %d\n",successcount);
    return 0;
}