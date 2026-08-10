#include<stdio.h>
int main() {
    int intType;
    float floatType;
    char charType;
    double doubleType;
    
    printf("size of int:%zu byte\n",sizeof(intType));
    printf("size of char:%zu byte\n",sizeof(charType));
    printf("size of float:%zu byte\n",sizeof(floatType));
    printf("size of double:%zu byte\n",sizeof(doubleType));
    return 0;
}