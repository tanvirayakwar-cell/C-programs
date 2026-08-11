#include<stdio.h>
int main() {
    int n;
    unsigned int fact=1;
    printf("Enter an integer:");
    scanf("%d",&n);

    if(n<0) {
        printf("factorial of negative number doesn't exist!");
    }
    else {
        for(int i=1;i<=n;i++) {
            fact=fact*i;            
        }
        printf("The factorial of %d is:%u",n,fact);       
    }
    return 0;

}