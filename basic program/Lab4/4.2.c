#include <stdio.h>
int main(){
    int N, i ;
    int passsum = 0 ;
    int failcount = 0 ;

    printf("Student Count :");
    scanf("%d", &N);

    int score[N] ;
    for(i = 0; i < N; i++){
        
        scanf("%d", &score[i]);

        if(score[i] >= 50){
            passsum += score[i];
        }else{
            failcount++;
        }
    }
    printf("Passing score sum: %d\n",passsum);
    printf("Failling student count: %d\n",failcount);
}