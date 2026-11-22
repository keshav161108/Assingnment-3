#include<stdio.h>
int main(){
    char str[100];
fgets(str,sizeof(str),stdin);
int i=0,vowels=0;
while(str[i]!='\0'&&str[i]!='\n'){
switch(str[i]){
    
    case 'A':
    case 'E':
    case 'I':
    case '0':
    case 'U':
case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        vowels++;
        break;
}
i++;
}
printf("Vowels=%d",vowels);

}