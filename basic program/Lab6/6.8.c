#include <stdio.h>
#define SIZE 5
int find_and_update(int *arr_ptr, int size ,int search_value, int new_value);
void print_array(int array[], int size);

int main(){
    int number[SIZE];
    int search_val ;
    int new_val ;
    int status ;
    int old_number[SIZE] ;
    int i ;

    printf("Enter %d integer elements for the array\n",SIZE);
    for(i=0; i < SIZE; i++){
        scanf("%d",&number[i]);
    }
    
    printf("\nEnter value to search(search Value):");
    scanf("%d",&search_val);
    printf("Enter new value to replace it with(New Value):");
    scanf("%d",&new_val);

    printf("Array Before Update: ");
    print_array(number, SIZE);

    status = find_and_update(number,SIZE,search_val,new_val);

    printf("Array After Update: ");
    print_array(number, SIZE);

    printf("Status: ");
    if (status == 1) {
        printf("Update Successful.\n");
    } else {
        printf("Update Failed (Value not found).\n");
    }
    return 0;
}

void print_array(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int find_and_update(int *arr_ptr, int size ,int search_value, int new_value){
    int found = 0 ;
    for(int j = 0; j < size; j++){
        if(arr_ptr[j] == search_value){
            arr_ptr[j] = new_value;
            found = 1 ;
        }
    }
    return found ;
}
