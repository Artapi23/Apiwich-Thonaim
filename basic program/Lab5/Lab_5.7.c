#include <stdio.h>
#define SIZE 5

void sortarray_ascending(int array[], int size) ;
void print_array(int array[], int size) ;

int main(){
    int number[SIZE];
    int i ;
    int original_copy[SIZE];

    printf("Enter %d integer numbers:\n",SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Number %d : ", i + 1);
        scanf("%d", &number[i]);

        original_copy[i] = number[i] ;
    }

    sortarray_ascending(number, SIZE);

    printf("-----ARRAY SORTING REPORT-----\n");
    
    printf("Original Array: ");
    print_array(original_copy, SIZE);
    
    printf("Sorted Array (Ascending): ");
    print_array(number, SIZE); 

    return 0;
}
void sortarray_ascending(int array[], int size){
     for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void print_array(int array[], int size){
    for(int i = 0; i < size; i++){
        printf(" %d",array[i]);
    }
    printf("\n");
}
