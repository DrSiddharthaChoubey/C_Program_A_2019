#include<stdio.h>
int main()
{
    int a,n,n1,n2,sum,count,p=1,i,j,n3;
    printf("enter the value of n=");
    scanf("%d",&n);
    n2=n1=n;
    for(i=1;i<=n;i++)
    {
        n2=n1=n3=i;
        count=0;
        sum=0;
    while(n3>0)
    {
        count++;
        n3=n3/10;
    }
    while(n1>0)
       {
        p=1;
        a=n1%10;
        for(j=1;j<=count;j++)
            p=p*a;
        sum=sum+p;
        n1=n1/10;
       }
    if(n2==sum)
        printf("\n %d is armstrong number",i);
    }
        return 0;
}

