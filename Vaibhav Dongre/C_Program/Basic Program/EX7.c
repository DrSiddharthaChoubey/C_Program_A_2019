/*If a five digit number is input through keyboard, write a program to calculate sum of its digit.(Hint use use the modulus operator)*/
#include<stdio.h>
int main()
{
    int n,n1,a,b,c,d,e,sum;
    printf("enter the number");
    scanf("%d",&n);
    n1=n;
    a=n1%10;
    n1=n1/10;
    b=n1%10;
    n1=n1/10;
    c=n1%10;
    n1=n1/10;
    d=n1%10;
    n1=n1/10;
    e=n1%10;

     sum=a+b+c+d+e;
     printf("sum=%d",sum);
     return 0;

}
