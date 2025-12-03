#include <stdio.h>

int GetSet(int **data);

int main(){
    int data_value = 20;
    int *data = &data_value,num ;
    num = GetSet(&data);
    printf("%d",num);

    return 0;
}

int GetSet(int **data){
    return (**data * 2);
}