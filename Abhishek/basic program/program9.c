
//if a four digit number is input through the keyboard, write a program to obtain the sum of the first and last digit.

#include<stdio.h>
int main()
{
    int i,a,b,c,d,e,sum;
    scanf("%d",&a);
        b=a%10;
        a=a/10;
        c=a%10;
        a=a/10;
        d=a%10;
        a=a/10;
        e=a%10;
        sum=b+e;
    printf("sum of first and last digit==%d",sum);
    return 0;
}
