#include <stdio.h>

int main(){
    int N_periods, i ;
    float initialbalance, penaltyfee ;
    float balance ;
    int cmdcode ;
    float amount ;
    float totalpenalty = 0.0 ;

    if (scanf("%f %f %d", &initialbalance , &penaltyfee , &N_periods) != 3) {
        return 1;
    }
    
    balance = initialbalance ;
    printf("Initial Balance: %.2f\n", balance); 

    for(i = 0; i < N_periods ; i++)
    {
        if (scanf("%d %f", &cmdcode , &amount) != 2) {
            break; 
        }

        switch(cmdcode){

            case 1 :
                balance += amount ;
                printf("Deposit: %.2f\n", amount); 
                break;
        
            case 2 :{
                if(amount <= balance){
                    balance -= amount ;
                    printf("Withdrawal: %.2f\n", amount);
                }else{
                    totalpenalty += penaltyfee;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyfee); 
                }
                break;
            }
            
            case 3 :{
                float apr ;
                float interest ;
                
                if(balance < 1000.00){
                    apr = 1.0 ;
                }else{
                    apr = 2.5 ;
                }
                
                interest = balance * (apr/100.0/12.0);
                balance += interest ;
                
                printf("Interest: %.2f (Rate: %.2f %%)\n", interest , apr); 
                break;
            }
            
            default :
                printf("Error: Invalid Command\n"); 
                break;
        }
    }
    
    printf("Final Balance: %.2f\n", balance);
    printf("Total Penalties Collected: %.2f\n", totalpenalty); 
    
    return 0 ;
}