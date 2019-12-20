//if a five digit number is input through the keyboard, write a program to calculate the sum of digits.

#include<stdio.h>
int main()
{
    int i,a,b,c,d,e,f,sum=0;
    scanf("%d",&a);
        b=a%10;
        a=a/10;
        c=a%10;
        a=a/10;
        d=a%10;
        a=a/10;
        e=a%10;
        a=a/10;
        f=a%10;
    sum=b+c+d+e+f;

    printf("sum=%d",sum);
    return 0;
}
