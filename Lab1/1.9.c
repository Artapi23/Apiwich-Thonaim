#include <stdio.h>
int main(){
    int zonecode;
    float weight_kg;
    float totalcost = 0.0;
    printf("Enter Zone code (1-3):");
    scanf("%d", &zonecode);
    printf("Enter Weight (kg):");
    scanf("%f", &weight_kg);
    switch (zonecode)
    {
    case 1:
    if(weight_kg >=0 && weight_kg <=5){
     totalcost = 50;}else{
        totalcost = 80;
    }
    break;
    case 2:
    if(weight_kg <=10){
        totalcost = 150;}else{
            totalcost = 250;
    }
    break;
    case 3:
    totalcost = 500;
    break;
    default:
    printf("Invalid zone code.\n");
    totalcost = -1.0;
    break;
}
if(totalcost >= 0.0){
    printf("Total Cost: %.2f bath\n", totalcost);
}
    return 0;
}