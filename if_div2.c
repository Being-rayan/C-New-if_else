// check if a number is divisible by 2 or not.
#include<stdio.h>
int main () {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2==0) {
        printf("the number is divisible by 2.");
    } else {
        printf("the number is not divisible by 2.");
    }
    return 0;
}