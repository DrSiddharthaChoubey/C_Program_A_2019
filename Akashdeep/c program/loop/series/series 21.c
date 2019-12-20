#include<stdio.h>
int main()
{
    int i,j,n;
    float sum=0;
    printf("enter no of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)

        {
            if(i%2==0)
            sum-=((float)i/(float)i+1.0);
            else
            sum+=((float)i/(float)i+1.0);
        }
    }
    printf("sum of series=%f",sum);
    return 0;
}





