#include <stdio.h>

void merfessort(int t[], int k);
int main(){
    int data[7] = {4,6,1,2,5,1,8} ;
    int n = 7 ;
    merfessort(data,n);
    for(int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    return 0;
}
void merfessort(int t[], int k){
    int i,j,minj,temp;
    for(i = 0; i < k-1; i++){
        minj = i ;
        for(j = i+1; j < k; j++)
            if(t[j] < t[minj])
                minj = j ;
        temp = t[i] ;
        t[i] = t[minj] ;
        t[minj] = temp ;
        }
}

    