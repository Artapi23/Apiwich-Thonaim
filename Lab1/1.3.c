#include <stdio.h>
int main(){
    int num1, num2, operationCode, result;
    scanf("%d %d %d", &num1, &num2, &operationCode);
    switch(operationCode){
        case1:
            result = num1 + num2;
            printf("%d",result);
            break;
        case2:
            result = num1 - num2;
            printf("%d",result);
            break;
        case3:
            result = num1 * num2;
            printf("%d",result);
            break;
        case4:
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