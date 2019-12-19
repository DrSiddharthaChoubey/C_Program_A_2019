#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(j=1;j<n;j++)
    {
    for(i=2;i<j;i++)
    {
            if(j%i==0)
            break;

    }
    if(i==j)
    sum+=i;
    }
    printf("sum of prime no==%d",sum);
    return 0;
}
