#include <stdio.h>
int main(){
    int N;
    int i;
    printf("Enter number that you want:");
    if(scanf("%d",&N) !=1 || N <=0){
        return 1;
    }
    for(i = 0; i < N; i++){
        printf("Hello World\n");
    }
    return 0;
}