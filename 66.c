#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n,r,ncr;
    scanf("%d%d",&n,&r);
    ncr =combination(n,r);
    printf("combination%d",ncr);
    return 0;

}