#include<stdio.h>
int main()
{
    int i,j,f=1,n;
    float sum=0;
    printf("enter no of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
            if(i%2!=0)
            sum+=((float)i/f);
            else
        sum-=((float)i/f);
    }
    printf("sum of series=%f",sum);
    return 0;
}


