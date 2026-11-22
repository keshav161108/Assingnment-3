#include<stdio.h>
int prime(int n){
    int flag=0;
    for(int i=2;i<=n-1;i++){
   if(n%i==0){
    flag=1;
   }
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
int k= prime(n);
printf("%d",k);


}
