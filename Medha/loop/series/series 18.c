#include<stdio.h>
int main()
{
    int i,j,f=1,n,p=1,k;
    float sum=0;
    printf("enter no of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;p=1;
        for(j=1;j<=i;j++)
            {
                f=f*j;
                p=p*i;
            }
            if(i%2==0)
            sum-=((float)p/f);
            else
            sum+=((float)p/f);

            printf("\n %d  %f",p,sum);


    }
    printf("sum of series=%f",sum);
    return 0;
}




