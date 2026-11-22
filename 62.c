#include<stdio.h>
void armstrong(int n){
    int sum=0,q,temp;
    temp=n;
    while(n!=0){
 q=n%10;
 sum =sum+q*q*q;
 n=n/10;
}
if(temp==sum){
    printf("armstrong");
}
else{
     printf("not armstrong");
}
}
int main(){
    int n;
    scanf("%d",&n);
    armstrong(n);
}