#include <stdio.h>
float calculate_win_odds(int outs);
int main(){
    int card_outs;
    float win_probably ;

    printf("Enter integer card: ");
    scanf("%d", &card_outs);

    win_probably = calculate_win_odds(card_outs);
    
    printf("Poker Probability Report");
    printf("Calcalated Outs: %d\n", card_outs);
    printf("Win Probability (Odds x 4): %.2f%%\n", win_probably);
    printf("Assesment:");
    if(win_probably >= 30){
        printf("HIGH Win Probability\n");
    }else{
        printf("LOW Win Probability\n");
    }
    return 0;
}
float calculate_win_odds(int outs){
    outs = outs * 4 ;
    return outs ;
}