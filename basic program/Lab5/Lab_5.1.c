#include <stdio.h>
int calcurate_area(int lenght, int width);
int input_lenght, input_width , result_area ;
int main(){
    printf("Enter rectangle lenght :");
    scanf("%d",&input_lenght);
    printf("Enter rectangle width :");
    scanf("%d", &input_width);
    calcurate_area(input_lenght, input_width);
    printf("\n-----RECTANGLE AREA REPORT-----\n");
    printf("Lenght: %d\n",input_lenght);
    printf("Width: %d\n",input_width);
    printf("Calculate area: %d", result_area);
}
int calcurate_area(int lenght, int width){
    result_area =  input_lenght * input_width ;
    return 0 ;
}
