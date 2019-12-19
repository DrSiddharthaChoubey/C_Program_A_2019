/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main()
{
    int n,n1,a,rev=0;
    printf("Enter five digit number");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    rev=rev+a*10000;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*1000;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*100;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*10;
    n1=n1/10;
    printf("%d",rev);
    if(n==rev)
        printf("Both are equal ");
    else
        printf("They are unequal");
    return 0;
}
