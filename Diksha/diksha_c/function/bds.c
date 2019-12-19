#include<stdio.h>
int ifprime(int n)
{
    int s=0,i;
    for(i=2;i<n;i++)
        {if(n%i==0)
        s++;}
        if(s==0)
            printf("prime no");
        else
            printf("not aprime no");
        return 0;
}
int main()
{ int n;
   scanf("%d",&n);
    ifprime(n);
}
