/*If a four digit number is input through keyboard, write a program to obtain the sum of the first and last digit of the number*/
#include<stdio.h>
int main()
{
    int n,f,l,sum;
    printf("enter the four digit number:");
    scanf("%d",&n);
    f=n/1000;
    l=n%10;
    sum=f+l;
    printf("sum of first and last digit number:%d",sum);
    return 0;

}
