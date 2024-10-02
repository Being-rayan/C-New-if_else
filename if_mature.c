// check if a person is mature or not.
#include <stdio.h>
int main () {
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age>=18) {
        printf("the person is mature.");
    } else {
        printf("the person is immature.");
    }
    return 0;
}