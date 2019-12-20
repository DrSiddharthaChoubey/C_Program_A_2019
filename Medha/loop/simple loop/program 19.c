#include<stdio.h>
int main()
{
    int n,a,count=0;
    scanf("%d",&n);
    /*while(a!=0)
    {
    a=n%10;               ///mine
    n=n/10;
    count++;
    }
    printf("%d",count-1);*/

    while(n>0)
    {
    n=n/10;                  ///sir
    count++;
    }
    printf("%d",count);
    return 0;
}


