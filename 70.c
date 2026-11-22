#include<stdio.h>
void vowel(char ch){
switch (ch)
{
case 'a':;
case 'e':;
case 'i':;
case 'o':;
case 'u':;
case 'A':;
case 'E':;
case 'I':;
case 'O':;
case 'U':printf("IT IS VOWEL");
        break;
default:printf("CONSONANT");
        break;

    
}
}
int main(){
    char ch;
    printf("Enter the alphabet");
    scanf("%c",&ch);
    vowel(ch);

}
