// do operation with the post and pre increment/decrement.
#include <stdio.h>
int main  () {
    int a,b,op;
    printf("Enter a:");
    scanf("%d",&a);
     printf("Enter b:");
    scanf("%d",&b);
    op=(a++ + ++b); // a prints as it is but b is printed after increment of 1.
    printf("%d",op);
    return 0;
}