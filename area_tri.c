#include<stdio.h>
int main() {
    float base,height;
    int area_triangle;
    printf("Enter base and height:");
    scanf("%f %f",&base,&height);

    area_triangle=(1/2)*base*height;
    printf("The area of triangle is:%d",area_triangle);
    return 0;


}