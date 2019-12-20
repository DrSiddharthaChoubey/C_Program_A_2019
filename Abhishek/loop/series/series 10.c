#include<stdio.h>
int main()
{
    int i,j,n,p;
    float sum=0;
    printf("enter no of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {     p=1;
        for(j=1;j<=i;j++)
            p=p*i;
        if(i%2==0)
        sum-=p;
        else
            sum+=p;

    }
    printf("sum of series=%f",sum);
    return 0;
}

