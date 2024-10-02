// check if a person is mature using ternary condition.
#include<stdio.h>
int main () {
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    // Condition ? do something if True : do something is False;
    age>=18 ? printf("Mature") : printf("Not Mature");
    return 0;
}