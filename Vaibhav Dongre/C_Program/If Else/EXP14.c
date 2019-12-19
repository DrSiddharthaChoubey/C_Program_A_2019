/* Write a C program to check whether a number is negative, positive or zero*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);

    if(n>0)
        printf("Its is a positive number");
    else if(n<0)
        printf("It is a negative number");
    else if(n==0)
        printf("It is zero");
    return 0;
}
