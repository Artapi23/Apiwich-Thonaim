#include <stdio.h>
#include <string.h>

void reverse(char str1[],char str2[]);
int main(){
    char text[20] = "I love you";
    char out [20] ;
    reverse(text,out);
    return 0 ;
}
void reverse(char str1[] , char str2[]){
    int lenght = strlen(str1);
    int i, j ;

    for(int i = 0, j = lenght -1 ;i < lenght; i++,j--){
        str2[i]=str1[j];
    }
    str2[lenght] = '\0';
    printf("%s\n",str2);
}