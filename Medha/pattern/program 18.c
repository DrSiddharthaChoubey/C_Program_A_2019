#include<stdio.h>
int main()
{
    int i,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n;k++)
            {
                if(i==1||i==n)
            printf("*");
        else
            if(k==n||k==i)
                 printf("*");
        else
            printf(" ");
            }printf("\n");
    }
    return 0;
}
