#include <stdio.h>
int main(){
    int DAYS = 7 ;
    int dailytemp[DAYS];
    int maxtemp = 0 ;
    int i ;
    for(i = 0; i < DAYS; i++){
        scanf("%d", &dailytemp[i]);
        if(dailytemp[i] > maxtemp){
            maxtemp = dailytemp[i];
        }
    }
    printf("------Daily Temperature Report----------\n");
    printf("Record Temperature (c):");
    for(i = 0; i < DAYS; i++){
        printf("%d", dailytemp[i]);
        if(i < DAYS -1){
            printf(" ");
        }
    }
    printf("\n");
    printf("Maximum Temp : %d\n", maxtemp);
    if(maxtemp >= 35){
        printf("Weather is Hot!\n");
    }else{
        printf("Weather is Moderate\n");
    }

}