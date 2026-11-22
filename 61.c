#include<stdio.h>
void pallindrome(int n){
    int sum=0,q,temp;
    temp=n;
    while(n!=0){
 q=n%10;
 sum =10*sum+q;
 n=n/10;
}
if(temp==sum){
    printf("Pallindrome");
}
else{
     printf("not Pallindrome");
}
}
int main(){
    int n;
    scanf("%d",&n);
    pallindrome(n);
}