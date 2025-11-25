#include <stdio.h>
int main(){
    int N;
    int sum = 0;
    printf("Enter number N:");
    if(scanf("%d", &N) != 1){
        return 1;
    }
    if (N <= 0){
        return 1;
    }
    for(int i = 1; i <= N; i++){
        sum = sum + i;
    }
    printf("sum of integers from 1 to %d is: %lld\n", N, sum);
    return 0;
}