#include <stdio.h>
int main(){
    int N_calculator, i ;
    int attacklv, opplv1, opparmor ;
    float baseattack, damagereduction, netdamage, damagedeficit ;
    const float worth_threshold = 150.0 ;
    scanf("%d",&N_calculator) ;
    for(i = 0; i < N_calculator;i++){
        scanf("%d %d %d", &attacklv ,&opplv1, &opparmor);
        baseattack = attacklv * 10.0 ;
        if(opparmor < 50){
            damagereduction = 0.20 ;
        }else{
            damagereduction = 0.40 ;
        }
        netdamage = baseattack * (1.0 - damagereduction) ;
        if(netdamage >= 150){
            printf("Success! Net Damage : %.2f\n", netdamage) ;
        }else{
            damagedeficit = worth_threshold - netdamage ;
            printf("Fail.Deficit: %.2f\n",damagedeficit);
        }
    }
    return 0 ;
}