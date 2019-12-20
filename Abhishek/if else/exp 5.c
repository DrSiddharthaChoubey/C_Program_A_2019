#include<stdio.h>
int main()
{
    int n,n1,a,rev=0;
    scanf("%d",&n);
    n1=n;
    a=n%10;
    n=n/10;
    rev=a*10000;
    a=n%10;
    n=n/10;
    rev=rev+a*1000;
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    a=n%10;
    rev=rev+a*10;
    a=n/10;
    rev=rev+a;
    printf("reverse=%d",rev);
    if(rev==n1)
        printf("\n palindrome number");
        else
        printf("\n not palindrome number");
    return 0;
}
