// check a condition using operators.
     //    && means if both true.
     //    || means if any one is true.
#include <stdio.h>
int main () {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d",num>9 && num<100);
    return 0; // 0 means false and 1 means true.

}