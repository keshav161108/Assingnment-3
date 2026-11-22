#include<stdio.h>
void fibonacci(int n){
    int a=0,sum=0,b=1;
int i=1;
printf("0");
printf("1");
while(i<=n){
    sum= a+b;
a=b;
 
 b=sum;
 i++;

 printf("%d",sum);

}
}

int main(){
    int n;
    printf("Enter the number of trems of fibanoccib series required");
    scanf("%d",&n);
    fibonacci(n);

}