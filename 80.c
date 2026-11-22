#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the lower case string");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0'&& str[i]!='\n'){
       if(str[i]>=97&& str[i]<=122){
        str[i]=str[i]-32;
       }
       i++;
    }
    printf("\nThe uppercase string is %s",str);
}