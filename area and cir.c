#include<stdio.h>
int main(){
    int radius,area,circum;
    float pi=3.14;
    printf("enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    circum=2*pi*radius;
    printf("The area and circumference of circle is: %d %d",area,circum);
    return 0;
}