#include<stdio.h>
int main() {
    int sub1, sub2, sub3 ,sub4 ,sub5;
    float total,percent;
    printf("Enter marks of five subjects:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    percent=total/5;

    printf("The percentage is=%f",percent);
    return 0;

}