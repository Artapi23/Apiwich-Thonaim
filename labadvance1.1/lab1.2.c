#include <stdio.h>
void Getset(int array[], int *num);
int main(){
    int N;
    if(scanf("%d", &N) !=1 || N <=0){
        printf("Invalid input\n");
        return 1;
    }
    int num = N;
    int data[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &data[i]);
    }
    Getset(data, &num);
    return 0;
}
void Getset(int array[], int *num){
    for (int i = 0; i < *num; i++){
        printf("%d",*(array+i));
    }
}