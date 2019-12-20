#include<stdio.h>
int main()
{
    int n1,i,a,b,c,arm;
    for(i=1;i<=500;i++)
    {
    n1=i;
    a=n1%10;
    n1=n1/10;
    b=n1%10;
    c=n1/10;
    arm=a*a*a+b*b*b+c*c*c;
    if(arm==i)
        printf("\n armstrong number=%d",i);
    }

    return 0;
}
