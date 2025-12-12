#include <stdio.h>
#include <string.h>
int main(){
    char text[101] ;
    int countupper = 0 ;
    int countlower = 0 ;
    int countdigit = 0 ;
    int countother = 0 ;
    int i ;

    scanf("%s", text);
    for(i = 0; text[i] != '\0';i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            countupper++ ;
        }else if(text[i] >= 'a' && text[i] <= 'z'){
            countlower++ ;
        }else if(text[i] >= '0' && text[i] <= '9'){
            countdigit++ ;
        }else{
            countother++ ;
        }
    }
        printf("Uppercase : %d\n", countupper);
        printf("Lowercase : %d\n", countlower);
        printf("Digits : %d\n", countdigit);
        printf("Special/Other : %d\n", countother);
    return 0 ;
}