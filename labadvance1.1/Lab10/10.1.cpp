#include <stdio.h>

long Sumloop(int n);
long Sumrecur(int n);
int main(){
    printf("Sumloop(n) = %d\n", Sumloop(10));
    printf("Sumrecur(n) = %d\n", Sumrecur(10));
    return 0;
}
long Sumloop(int n){
    int i ;
    long fac = 1 ;
    for(i = 1; i <= n; i++){
        fac *= i ;
    }
    return fac ;
}
long Sumrecur(int n){
    if(n > 1)
    return n * Sumrecur (n-1);
    return 1 ;
}  