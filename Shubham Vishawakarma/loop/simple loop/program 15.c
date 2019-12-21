#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    i=n;
    for(i=1;i<=n;i++)
        sum=sum+i;
        printf("\n %d",sum);
    return 0;
}

