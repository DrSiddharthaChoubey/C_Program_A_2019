#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            if(i%2==0)
        sum-=j;
        else
            sum+=j;

    }
    printf("sum=%d",sum);
    return 0;
}



