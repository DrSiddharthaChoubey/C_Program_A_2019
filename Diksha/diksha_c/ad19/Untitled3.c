#include<stdio.h>
int main()
{
    int x,f;
    printf("\n Enter a number ");
    scanf("%d",&x);
    printf("\n Sum of numbers=%d",sum1(x));
    return 0;
}
int sum1(int n)
{
    int s=0;
    if(n==1)
        return 1;
    else
        s=n+sum1(n-1);
    return s;
}
