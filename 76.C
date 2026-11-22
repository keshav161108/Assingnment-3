#include<stdio.h>
int main(){
    char str2[100],str1[100];
    printf("Enter the string ");
    fgets(str1,sizeof(str1),stdin);
    int i=0;
    while(str1[i]!='\0'&& str1[i]!='\n'){
       i++;
    }
    int j=i-1;
    int k=0;
    while(j>=0){
        str2[k]=str1[j];
        k++;
        j--;
    }
    str2[k]='\0';
    printf("%s",str2);
}