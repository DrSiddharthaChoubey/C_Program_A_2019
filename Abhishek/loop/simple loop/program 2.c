#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter a number=");
    scanf("%d",&n);
    /*for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }*/
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial=%d",fact);
    return 0;
}
