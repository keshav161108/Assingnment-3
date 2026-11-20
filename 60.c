#include<stdio.h>
void oddeven(int n){
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("odd");
    }
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    oddeven(n);
}