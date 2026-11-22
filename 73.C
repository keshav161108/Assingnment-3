#include<stdio.h>
int main(){
    char ch[50],chcpy[100],temp;
   gets(ch);
   int i=0,j=0;
   while(ch[i]!='\0'){
    
    chcpy[j]=ch[i];
    
    i++;
    j++;

   }
   chcpy[j]='\0';

   puts(chcpy);

}