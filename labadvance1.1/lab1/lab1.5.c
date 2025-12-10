#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value , int *row , int *col);
int main(){
   
    int *data,m ,n;
    GetMatrix(&data ,&m ,&n);
    return 0;

}
void GetMatrix(int **value , int *row , int *col){
    printf("Enter number of row:");
    if(scanf("%d", row)!= 1){
        return;
    }
    printf("Enter number of col:");
    if(scanf("%d", col)!= 1){
        return;
    }
     *value = (int *)malloc(sizeof(int)*(*row * *col));
      
    for(int i =0; i < *row ; i++){
        for(int j = 0 ; j < *col ; j++){
          scanf("%d",&(*value)[ i * *col +j]);
        }
    }
     printf("\nHere your col and row\n");
    for (int i = 0; i < *row; i++) {
     for (int j = 0; j < *col; j++) {
        printf("%2d", (*value)[i * *col + j]); 
        }
        printf("\n");
       }
    
} 