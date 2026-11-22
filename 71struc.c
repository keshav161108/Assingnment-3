#include<stdio.h>
struct student{
int roll_no;
char name[20];
int marks;

};
int main(){
struct student s[10];
for(int i=0;i<10;i++){
    printf("Enter studets rollno.,name,marks out 600\n");
    scanf("%d",&s[i].roll_no);
    scanf("%s",s[i].name);
    scanf("%d",&s[i].marks);
}
printf("The studests ehose marks are greater than 500");
for(int i=0;i<10;i++){
    if(s[i].marks>500){
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].roll_no);

    }
}

}
