#include<stdio.h>
int main()
{
    int n,n1,rev=0,a;
    printf("Enter no");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    printf("reverse of %d= %d",n1,rev);
    return 0;
}

