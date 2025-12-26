#include <stdio.h>

FILE *ftpr ;
int year = 2025 ;
char *text = "Hello, C File Handling is easy.\n" ;
char *FILENAME = "output_data.txt" ;

int main(){
   
    ftpr = fopen(FILENAME, "w");
    if(ftpr == NULL){
        printf("Error: Could not Open File %s for writting.\n", FILENAME);
        return 1 ;
    }

    printf("---FILE WRITING PROCESS---\n");
    printf("Writing data to %s...\n", FILENAME);

    fprintf(ftpr, "Hello, C File Handling is easy.\nYear: %d", year);

    printf("File writing complete.\n");
    fclose(ftpr);
    printf("\n---FILE OPERATION REPORT---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILENAME);

    return 0;
}