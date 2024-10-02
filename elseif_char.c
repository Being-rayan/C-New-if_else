// find if a character is upper case or not.
#include<stdio.h>
int main () {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z') {
        printf("Small case letter");
    }
    else if (ch>='A' && ch <='Z') {
        printf("Upper Case letter");
    } else {
        printf("Not a English letter.");
    }
    return 0;
}