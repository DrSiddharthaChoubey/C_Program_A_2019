#include<stdio.h>
int main()
{
    int i,j,n,f;
    float sum=0;
    printf("enter no of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {     f=1;
        for(j=1;j<=i;j++)
            f=f*j;
            if(i%2==0)
            sum-=(f/(float)i);
            else
            sum+=(f/(float)i);
            printf("\n %d  %f",f,sum);

    }
    printf("sum of series=%f",sum);
    return 0;
}



