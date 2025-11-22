#include <stdio.h>
int main(){
    int num1, num2, operationCode,result;
    scanf("%d %d %d", &num1, &num2, &operationCode);
    printf("Enter number 1 \n");
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