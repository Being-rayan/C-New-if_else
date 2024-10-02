// check if a alphabet is vowel or consonent or not an alphabet.
#include<stdio.h>
int main () {
    char ch,vow;
    printf("Enter the character:");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    if (ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("It's a vowel !\n");
    }  else if (ch!= 'a' || ch!='e' || ch!='i' || ch!='o' || ch!='u'){
        printf("It's not a vowel !");
    } 
    }
    else {
        printf("Not an alphabet");
    }
return 0;
}