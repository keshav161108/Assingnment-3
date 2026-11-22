#include<stdio.h>
int main(){
    char ch[100];
    char st[100];
printf("Enter the line");
fgets(st,sizeof(st),stdin);
int i=0,k=0;
    while(st[i]!='\0'){
       k++;
       i++;}
       printf("length of string=%d",k-1);
}