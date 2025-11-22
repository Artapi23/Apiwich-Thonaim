#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number :");
    if(scanf("%d",&N) != 1){
        return 1;
    }
    if(N <= 0){
        printf("Error");
        return 1;
    }
    for (int i = 0; i < N; i++){
        printf("Hello loop!\n");
    }
    return 0;
}
