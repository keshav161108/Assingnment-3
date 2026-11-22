#include<stdio.h>
#include<string.h>
int main(){
char str[100],str1[200];
printf("Enter the str");
fgets(str,sizeof(str),stdin);
int i=0,j=0,k=0;
while(str[i]!='\0'&&str[i]!='\n'){
    i++;
}
j=i-1;
while(j>=0){
str1[k]=str[j];
k++;
j--;}
str1[k]='\0';

if(strcmp(str1,str)==0){
    printf("Pallindeome");

}
else{
    printf("NOT Pallindrome");
}
}