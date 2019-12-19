#include<stdio.h>
int main()
{
    int j,f=1,n;
    float sum=0,i;
    printf("Enter no of terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        sum=sum+i/f;
        i++;
    }
    printf("Sum of series=%f",sum);
    return 0;
}

