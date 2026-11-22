#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a line");
    fgets(str,sizeof(str),stdin);
    int lowercase=0, uppercase=0,symbols=0,digits=0;
    int i=0;
    while(str[i]!='\0'&& str[i]!='\n'){
        if(str[i]>='a' && str[i]<='z'){
          lowercase++;

        }
        else if(str[i]>='A' && str[i]<='Z'){
          uppercase++;
          
        }
        else if(str[i]>='0' && str[i]<='9'){
          digits++;
          
        }
        else{
            if(str[i]!=' '){
            symbols++;
        }
        
    }
  i++;}
    printf("\nThe no. of lower case letter are =%d",lowercase);
     printf("\nThe no. of upper case letter are =%d",uppercase);
      printf("\nThe no. of digits are =%d",digits);
       printf("\nThe no. of SPECIALSYMBOLS are =%d",symbols);
}


