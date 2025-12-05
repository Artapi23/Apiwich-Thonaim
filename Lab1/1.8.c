#include <stdio.h>
int main(){
    int daycode;
    int hour;
    printf("Enter day code:");
    scanf("%d",&daycode);
    printf("Enter Hour:");
    scanf("%d", &hour);
    switch (daycode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if(hour >=8 && hour <=177){
            printf("System running(workday)\n");
        }
        else if(hour >=0 && hour <=23){
            printf("System idle(offwork)\n");
        }
        else{
            printf("Invalid hour input\n");
        }
        break;
    case 6:
    case 7:
        printf("Weekend Mode\n");
        break;
    default:
    printf("Error day code");
    break;
    }
    return 0;
}