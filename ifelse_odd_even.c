// check for +ve or -ve and also check odd or even.
#include<stdio.h>
int main () {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num>=0) {
        printf("The number is +ve\n");
         if (num%2==0){
        printf("The number is even");
    } else {
        printf("The number is odd");
    }
    } else {
        printf("the Number is -ve\n");
        if (num%2==0){
        printf("The number is even");
    } else {
        printf("The number is odd");
    }
    } 
    return 0;
}