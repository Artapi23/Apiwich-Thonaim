#include <stdio.h>
int main(){
    int grosssalary ;
    float taxrate = 0.0 ;
    float taxamount = 0.0 ;
    float netsalary = 0.0 ;
    scanf("%d", &grosssalary);
    if(grosssalary < 20000){
        taxrate = 0.0 ;
    }else if(grosssalary >= 20000 < 50000){
        taxrate = 0.05 ;
    }else if(grosssalary >= 50000){
        taxrate = 0.10 ;
    }
    taxamount = grosssalary * taxrate ;
    netsalary = (float)grosssalary - taxamount ;
    printf("\n -----SALARY CALCULATION REPORT-----\n");
    printf("Gross Salary: %d THB\n",grosssalary);
    printf("Tax Rate Applied: %.0f%%\n", taxrate * 100);
    printf("Tax Amount Deducted : %.2f THN\n",taxamount);
    printf("Net Salary: %.2f THB\n", netsalary);
}