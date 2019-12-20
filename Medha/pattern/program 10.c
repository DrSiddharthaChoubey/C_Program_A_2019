#include<stdio.h>
int main()
{
    int i,j,k,l,s,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {       s=i;
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",s++);
                for(l=1;l<i;l++)
                printf("%d",--s-1);
            printf("\n");
    }
    return 0;
}



