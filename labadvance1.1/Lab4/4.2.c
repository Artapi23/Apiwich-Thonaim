#include <stdio.h>
#include <stdlib.h>

void go(int ***p, int **z) ;

int main(){
    int *b = (int *)malloc(sizeof(int));
    int *c = (int *)malloc(sizeof(int));
    *b = 10 ;
    *c = 20 ;
    int **a ;
    printf("\n") ;
    go(&a,&b);
    printf(" %d  %p  %p\n", **a, *a, a);
    printf("--------------------\n");
    go(&a,&c);
    printf(" %d  %p  %p\n", **a, *a, a);
    return 0 ;
}
void go(int ***p, int **z){
    *p = z ;
}