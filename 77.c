#include<stdio.h>
#include<string.h>
void reverseString(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main(){
char str1[100]="Hello";
char str2[100]="Hello";
char str3[100]="Bye";
char str4[100];
char str5[100]="Hello";
char str6[100];

//to find length we se strlen
int len1,len2,len3;
len1 =strlen(str1);
len2 =strlen(str2);
len3 =strlen(str3);
printf("len1=%d,len2=%d,len3=%d\n",len1,len2,len3);
//FOR COPY WE USE STRCPY(DESTINATION, SOURCE)
//LET SUPPOSE I WANT TO COPY STR3 I STR 4
strcpy(str4,str3);
puts(str4);
//for CONCATINATE, we strcat(,let supoose i want to concatinate str1and str3)
strcat(str1,str3);
puts(str1);
//for compare we use strcmp lets compare str5 and str2 using strcmp

if(strcmp(str5,str2)==0){
    printf("Both strings are equal");
}
else{
    printf("Both are unequal");
}
char revStr[100]="Hello";

    reverseString(revStr);
    printf("5. Reversed first string = %s\n", revStr);


}
