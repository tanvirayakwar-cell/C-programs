#include<stdio.h>
int main() {
    float principle,rate,time;
    float si;
    printf("Enter principle,rate,time:");
    scanf("%f %f %f",&principle,&rate,&time);

    si=(principle*rate*time)/100;
    print("The simple interest is:%.2f",si);
    return 0;
}