#include <stdio.h>
int main(){
    
    int num1, num2, num3, num4, num5;
    int total_sum = 0;
    FILE *fptr ;
    char *FILENAME = "input_data.csv";

    fptr = fopen(FILENAME,"r");
        if(fptr == NULL){
            printf("ERROR : Could not open file %s ",FILENAME);
            return 1 ;
        }
    if (fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5) == 5) {
        total_sum = num1 + num2 + num3 + num4 + num5;
    }
    fclose(fptr);

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data Read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}