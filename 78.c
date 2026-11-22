#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    int flag=0;
    fgets(ch,sizeof(ch),stdin);
    char charecter;
    scanf("%c",&charecter);
    for(int i=0;i<=strlen(ch);i++){
        if(ch[i]==charecter){
            flag=1;
            break;
        }
    }
    if(flag==1)printf("Charecter is present in string");
    else printf("Charecter is not  present in string");
    
}