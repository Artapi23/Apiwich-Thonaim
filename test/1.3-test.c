#include <stdio.h>
    FILE *fptr ;
    char *FILENAME = "output_data.txt";
    char *text = "Hello, C File Handling is easy.";
    int year = 2025 ;
    

int main(){
    
    fptr = fopen(FILENAME,"w");
     if(fptr == NULL){
         printf("ERROR : Could not open file %s ",FILENAME);
    }
    printf("---FILE WRITING PROCESS---\n");
    printf("Writing data to %s...\n",FILENAME);
     
    fprintf(fptr," %s\n",text);


printf("File writing complete.\n");
fclose(fptr);
    
    printf("\n---FILE PROCESSING REPORT---\n");
    printf("Action : file creation and data writing\n");
    printf("Filename : %s\n",FILENAME);

    return 0;
}