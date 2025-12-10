#include <stdio.h>
int Getset(int **data);
int main(){
    int data_value = 99;
    printf("Number before multipie is:%d\n",data_value);
    int *data = &data_value,num;
    num = Getset(&data);
    printf("%d",num);
    return 0;
}
int Getset(int **data){
    printf("Your number when multipie:");
    return(**data *3);
}