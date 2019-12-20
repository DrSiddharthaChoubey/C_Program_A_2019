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
            sum+=(p/(float)i);
            printf("\n %d  %f",p,sum);

    }
    printf("sum of series=%f",sum);
    return 0;
}



