#include <stdio.h>
int main(){
    int num1, num2, operationCode,result;
    if (scanf("%d", &num1 )!= 1);
    if (scanf("%d", &num2 )!= 1);
    if (scanf("%d", &operationCode )!= 1);
    switch(operationCode){
        case 1:
            result = num1 + num2;
            printf("%d",result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d",result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d",result);
            break;
        case 4:
            if(num2 !=0)
            printf("%d", num1 / num2);
            else
            printf("Can't Divided By ZERO");
            break;

            default:
            printf("Invalid Operation");
    }
    return 0;
    }