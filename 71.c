#include<stdio.h>
#include<string.h>
int length(char st[]){
    int i=0,k=0;
    while(st[i]!='\0'){
       k++;
       i++;
    }
    return k;
}
int main(){
char st[100];
printf("Enter the line");
fgets(st,sizeof(st),stdin);
int stringlength =length(st);
printf("length of string=%d",stringlength-1);
}