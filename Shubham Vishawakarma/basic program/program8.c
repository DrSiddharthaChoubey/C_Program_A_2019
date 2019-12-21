//if a five digit number is input through the keyboard, write a program to reverse the number.

#include<stdio.h>
int main()
{
    int i,a,b,c,d,e,f,rev=0;
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
        rev=b*10000+c*1000+d*100+e*10+f;
    printf("reverse=%d",rev);
    return 0;
}

