#include<stdio.h>
int main()
{
    int i,j,k,s,n;
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++)
    {     if(i==1||i==n)
    printf("*");
        else
            printf(" ");

        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
           if(k==i||k==n)
            printf("*");
        else
            printf(" ");
        for(s=i;s<n;s++)
            if(s==i||s==n)
            printf("*");
        else
        printf("*");
        printf("\n");
    }
    return 0;
}




