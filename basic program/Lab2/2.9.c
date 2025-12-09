#include <stdio.h>
int main(){
    int N, i;
    int initialstock ;
    float penalty_free ;
    int currentstock ;
    int cmdcode , quantity ;
    float totalpenalties = 0.0 ;
    scanf("%d %d %f", &N , &initialstock , &penalty_free);
    currentstock = initialstock ;
    for(i = 0; i < N; i++){
        scanf("%d %d", &cmdcode , &quantity);
        switch(cmdcode){
            case 1 :
            if(quantity > 0){
                currentstock += quantity;
                printf("Recieved %d units\n", quantity);
            }else{
                printf("Error\n");
            }
            break;

            case 2 :
            if(quantity <= 0){
                printf("Error quantity must be positive\n");
            }else if(quantity <= currentstock){
                currentstock -= quantity;
                printf("Shipped %d units\n", quantity);
            }
            else{
                totalpenalties += penalty_free;
                printf("FAILURE:Insufficient stock . PENALTY %.2f added\n", penalty_free);
            }
            break ;

            case 3 :
            printf("Avaiable Stock: %d\n", currentstock);
            printf("Total Penalties: %.2f\n", totalpenalties);
            break ;

            default:
            printf("Error invalid.\n");
            break;
        }
    }
    return 0 ;
}