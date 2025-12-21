#include <stdio.h>
#define SIZE 3
int main(){
    int data[SIZE] ;
    int *ptr ;
    int i ;
    printf("Enter %d integer elements for the array:\n",SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Element - %d : ",i);
        scanf("%d",&data[i]);
    }
    ptr = data;
    printf("\n---Array and Pointer Report---\n");
    printf("Index | Value (Direct) | Value (via pointer)\n");
    for(i = 0; i < SIZE; i++){
        printf("%5d | %14d | %19d |%p\n",
        i,
        data[i],
        *(ptr + i),
        (ptr + i)
        );
    }
    
}