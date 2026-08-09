#include<stdio.h>
int main() {
    float celsius,fahren;
    printf("Enter temperature in Celsius:");
    scanf("%f",&celsius);

    fahren=(celsius*9/5)+32;
    printf("%.2f celsius=%.2f fahrenheit",celsius,fahren);
    return 0;
}