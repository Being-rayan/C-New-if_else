// change small case to it's upper case.
#include <stdio.h>
int main () {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z') { //A to Z --> 65 to 90
        ch=ch-32; // a to z --> 97 to 122
        printf("Uppercase:%c",ch);
    } else printf("Already upper !");
return 0;
}