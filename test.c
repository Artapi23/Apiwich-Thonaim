#include<stdio.h>
#include<string.h>

void explode(char str1[],char splitter[]);

int main(){
    char text[] = "I/Love/you";
    char *splitter = "/";
    explode(text,splitter);
    return 0;
}
void explode(char str1[],char splitter[]){
  int i = 0, count = 0;
  char *str2 ;
  str2 = strtok(str1,splitter);
   while (str2 != NULL){
    printf("str2[%d] = %s\n",i,str2);
    str2 = strtok(NULL,splitter);
    i++,count++;
   }
 printf("\n\n Count = %d\n",count);
}