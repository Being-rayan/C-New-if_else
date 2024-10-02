// check if a year is leap year or not.
#include<stdio.h>
int main () {
    int yr,leap;
    printf("Enter the year:");
    scanf("%d",&yr);
     //divided by 4 and remainder should be 0 but not with 100.
    if ((leap=yr%4==0 && yr%100 !=0)) {
        printf("Yes it's a leap year !",leap);
    } else {
        printf("Not a leap year !");
    }
    return 0;
}