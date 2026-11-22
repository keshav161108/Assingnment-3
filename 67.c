#include<stdio.h>
int maxmimum(int n){
int a[n],max=a[0];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=1;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}
return max;

}
int main(){
    int n;
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    
int max =maxmimum(n);
printf("The maximum element is;%d",max);
return 0;
}