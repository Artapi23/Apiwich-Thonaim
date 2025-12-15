#include <stdio.h>
int main(){

    int N, i ;
    printf("Enter your number:");
    scanf("%d", &N);
    
    int score[N] ;

    for(i = 0 ; i < N ; i++){
        scanf("%d", &score[i]);
    }
    for (i = N - 1 ;i >= 0 ; i--){
        printf("%d\n",score[i]);
    }
    return 0 ;
}