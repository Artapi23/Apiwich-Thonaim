#include <stdio.h>

void increse_value(int *number_ptr);

int main(){
    int data ;
    printf("Enter initial intiger value:");
    scanf("%d",&data);
    printf("\n---Pointer Modification---\n");
    printf("1.valur before function call: %d\n",data);
    increse_value(&data);
    printf("2.valur after function call: %d\n",data);
    return 0;
}
    void increse_value(int *number_ptr){
        *number_ptr = *number_ptr + 10;
    }