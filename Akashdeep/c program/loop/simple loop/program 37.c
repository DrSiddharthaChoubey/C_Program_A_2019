#include<stdio.h>
int main()
{
    int a,n,n1,n2,sum=0,count=0,p=1,i;
    printf("enter the value of n=");
    scanf("%d",&n);
    n1=n;
    n2=n1;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(n1>0)
       {
        p=1;
        a=n1%10;
        for(i=1;i<=count;i++)
            p=p*a;
        sum=sum+p;
       // sum=sum+pow(a,count);
        n1=n1/10;
       }
    if(sum==n2)
        printf("armstrong number");
    else
        printf("not armstrong number");
        return 0;
}
